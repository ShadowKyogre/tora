/****************************************************************************
 *
 * TOra - An Oracle Toolkit for DBA's and developers
 * Copyright (C) 2000 GlobeCom AB
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 *      As a special exception, you have permission to link this program
 *      with the Qt and Oracle Client libraries and distribute executables,
 *      as long as you follow the requirements of the GNU GPL in regard to
 *      all of the software in the executable aside from Qt and Oracle client
 *      libraries.
 *
 ****************************************************************************/

TO_NAMESPACE;

#include "tomain.h"
#include "toresultstats.h"
#include "tosql.h"

#include "toresultstats.moc"

toResultStats::toResultStats(int ses,toConnection &conn,QWidget *parent,
			     const char *name=NULL)
  : toResultView(false,false,conn,parent,name)
{
  SessionID=ses;
  setup();
}

static toSQL SQLSession("toResultStats:Session",
			"SELECT MIN(SID) FROM V$MYSTAT",
			"Get session id of current session");

toResultStats::toResultStats(toConnection &conn,QWidget *parent,
			     const char *name=NULL)
  : toResultView(false,false,conn,parent,name)
{
  try {
    otl_stream str(1,
		   SQLSession(Connection),
		   Connection.connection());
    str>>SessionID;
  } catch (otl_exc &exc) {
    SessionID=-1;
  }
  setup();
}

void toResultStats::setup(void)
{
  for (int i=0;i<TO_STAT_MAX;i++)
    LastValues[i]=0;

  addColumn("Name");
  addColumn("Value");
  addColumn("Delta");

  setColumnAlignment(1,AlignRight);
  setColumnAlignment(2,AlignRight);
}

static toSQL SQLStatistics("toResultStats:Statistics",
			   "SELECT Statistic#,Value FROM V$SesStat WHERE SID = :f1<int>",
			   "Get statistics for session, must have same number of columns");

void toResultStats::resetStats(void)
{
  try {
    otl_stream str(1,
		   SQLStatistics(Connection),
		   Connection.connection());
    str<<SessionID;
    while(!str.eof()) {
      int id;
      double value;
      str>>id;
      str>>value;
      if (id<TO_STAT_MAX)
	LastValues[id]=value;
    }
  } catch (otl_exc &exc) {
    toStatusMessage((const char *)exc.msg);
  }
}

void toResultStats::changeSession(int ses)
{
  if (SessionID!=ses) {
    SessionID=ses;
    resetStats();
    refreshStats();
  }
}

static toSQL SQLStatisticName("toResultStats:StatisticName",
			      "SELECT b.Name,a.Statistic#,a.Value\n"
			      "  FROM V$SesStat a,V$StatName b\n"
			      " WHERE a.SID = :f1<int> AND a.Statistic# = b.Statistic#\n"
			      " ORDER BY UPPER(b.Name) Desc",
			      "Get statistics and their names for session, must have same number of columns");

void toResultStats::refreshStats(void)
{
  try {
    clear();
    otl_stream str(1,
		   SQLStatisticName(Connection),
		   Connection.connection());
    str<<SessionID;
    while(!str.eof()) {
      int id;
      double value;
      char buffer[65];
      str>>buffer;
      str>>id;
      str>>value;
      QString delta;
      QString absVal;
      toResultViewItem *last=NULL;
      if (value!=0) {
	if (id<TO_STAT_MAX)
	  delta.sprintf("%li",long(value-LastValues[id]));
	absVal.sprintf("%li",long(value));
	if (id<TO_STAT_MAX)
	  LastValues[id]=value;
	toResultViewItem *item=new toResultViewItem(this,last);
	item->setText(0,buffer);
	item->setText(1,absVal);
	item->setText(2,delta);
	last=item;
      }
    }
  } catch (const QString &str) {
    toStatusMessage((const char *)str);
  } catch (const otl_exc &exc) { 
    toStatusMessage((const char *)exc.msg);
  }
}
