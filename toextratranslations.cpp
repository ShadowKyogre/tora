//***************************************************************************
/*
 * TOra - An Oracle Toolkit for DBA's and developers
 * Copyright (C) 2000-2001,2001 Underscore AB
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation;  only version 2 of
 * the License is valid for this program.
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
 *      with the Oracle Client libraries and distribute executables, as long
 *      as you follow the requirements of the GNU GPL in regard to all of the
 *      software in the executable aside from Oracle client libraries.
 *
 *      Specifically you are not permitted to link this program with the
 *      Qt/UNIX, Qt/Windows or Qt Non Commercial products of TrollTech.
 *      And you are not permitted to distribute binaries compiled against
 *      these libraries without written consent from Underscore AB. Observe
 *      that this does not disallow linking to the Qt Free Edition.
 *
 * All trademarks belong to their respective owners.
 *
 ****************************************************************************/

/* This file is not intended to be compiled into the program, only needed for lupdate to get all needed translations */

#include <qobject.h>

static char *toExtraTranslations[]={
QT_TRANSLATE_NOOP("toBrowser:AnyGrants","Privilege"),
QT_TRANSLATE_NOOP("toBrowser:AnyGrants","Grantee"),
QT_TRANSLATE_NOOP("toBrowser:AnyGrants","Grantor"),
QT_TRANSLATE_NOOP("toBrowser:AnyGrants","Grantable"),
QT_TRANSLATE_NOOP("toBrowser:TableTrigger","Trigger Name"),
QT_TRANSLATE_NOOP("toBrowser:TableTrigger","Triggering Event"),
QT_TRANSLATE_NOOP("toBrowser:TableTrigger","Column Name"),
QT_TRANSLATE_NOOP("toBrowser:TableTrigger","Status"),
QT_TRANSLATE_NOOP("toBrowser:TableTrigger","Description"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Owner"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Table Name"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Tablespace Name"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Cluster Name"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Iot Name"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Pct Free"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Pct Used"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Ini Trans"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Max Trans"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Initial Extent"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Next Extent"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Min Extents"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Max Extents"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Pct Increase"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Freelists"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Freelist Groups"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Logging"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Backed Up"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Num Rows"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Blocks"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Empty Blocks"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Avg Space"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Chain Cnt"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Avg Row Len"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Avg Space Freelist Blocks"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Num Freelist Blocks"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Degree"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Instances"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Cache"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Table Lock"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Sample Size"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Last Analyzed"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Partitioned"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Iot Type"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Temporary"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Secondary"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Nested"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Buffer Pool"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Row Movement"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Global Stats"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","User Stats"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Duration"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Skip Corrupt"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Monitoring"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Cluster Owner"),
QT_TRANSLATE_NOOP("toBrowser:TableInformation","Dependencies"),
QT_TRANSLATE_NOOP("toBrowser:ListView","View Name"),
QT_TRANSLATE_NOOP("toBrowser:ListIndex","Index Name"),
QT_TRANSLATE_NOOP("toBrowser:IndexCols","Table Name"),
QT_TRANSLATE_NOOP("toBrowser:IndexCols","Column Name"),
QT_TRANSLATE_NOOP("toBrowser:IndexCols","Column Length"),
QT_TRANSLATE_NOOP("toBrowser:IndexCols","Descend"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Owner"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Index Name"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Index Type"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Table Owner"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Table Name"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Table Type"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Uniqueness"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Compression"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Prefix Length"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Tablespace Name"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Ini Trans"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Max Trans"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Initial Extent"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Next Extent"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Min Extents"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Max Extents"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Pct Increase"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Pct Threshold"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Include Column"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Freelists"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Freelist Groups"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Pct Free"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Logging"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Blevel"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Leaf Blocks"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Distinct Keys"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Avg Leaf Blocks Per Key"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Avg Data Blocks Per Key"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Clustering Factor"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Status"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Num Rows"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Sample Size"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Last Analyzed"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Degree"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Instances"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Partitioned"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Temporary"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Generated"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Secondary"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Buffer Pool"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","User Stats"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Duration"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Pct Direct Access"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Ityp Owner"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Ityp Name"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Parameters"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Global Stats"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Domidx Status"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Domidx Opstatus"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Funcidx Status"),
QT_TRANSLATE_NOOP("toBrowser:IndexInformation","Join Index"),
QT_TRANSLATE_NOOP("toBrowser:ListSequence","Sequence Name"),
QT_TRANSLATE_NOOP("toBrowser:SequenceInformation","Sequence Owner"),
QT_TRANSLATE_NOOP("toBrowser:SequenceInformation","Sequence Name"),
QT_TRANSLATE_NOOP("toBrowser:SequenceInformation","Min Value"),
QT_TRANSLATE_NOOP("toBrowser:SequenceInformation","Max Value"),
QT_TRANSLATE_NOOP("toBrowser:SequenceInformation","Increment By"),
QT_TRANSLATE_NOOP("toBrowser:SequenceInformation","Cycle Flag"),
QT_TRANSLATE_NOOP("toBrowser:SequenceInformation","Order Flag"),
QT_TRANSLATE_NOOP("toBrowser:SequenceInformation","Cache Size"),
QT_TRANSLATE_NOOP("toBrowser:SequenceInformation","Last Number"),
QT_TRANSLATE_NOOP("toBrowser:ListSynonym","Synonym Name"),
QT_TRANSLATE_NOOP("toBrowser:SynonymInformation","Owner"),
QT_TRANSLATE_NOOP("toBrowser:SynonymInformation","Synonym Name"),
QT_TRANSLATE_NOOP("toBrowser:SynonymInformation","Table Owner"),
QT_TRANSLATE_NOOP("toBrowser:SynonymInformation","Table Name"),
QT_TRANSLATE_NOOP("toBrowser:SynonymInformation","Db Link"),
QT_TRANSLATE_NOOP("toBrowser:ListCode","Object Name"),
QT_TRANSLATE_NOOP("toBrowser:ListCode","Object Type"),
QT_TRANSLATE_NOOP("toBrowser:ListCode","Type"),
QT_TRANSLATE_NOOP("toBrowser:ListTables","Table Name"),
QT_TRANSLATE_NOOP("toBrowser:ListCode","Object Name"),
QT_TRANSLATE_NOOP("toBrowser:ListCode","Object Type"),
QT_TRANSLATE_NOOP("toBrowser:ListCode","Type"),
QT_TRANSLATE_NOOP("toBrowser:AnyGrants","Privilege"),
QT_TRANSLATE_NOOP("toBrowser:AnyGrants","Grantee"),
QT_TRANSLATE_NOOP("toBrowser:AnyGrants","Grantor"),
QT_TRANSLATE_NOOP("toBrowser:AnyGrants","Grantable"),
QT_TRANSLATE_NOOP("toBrowser:ListTrigger","Trigger Name"),
QT_TRANSLATE_NOOP("toBrowser:TriggerInfo","Owner"),
QT_TRANSLATE_NOOP("toBrowser:TriggerInfo","Trigger Name"),
QT_TRANSLATE_NOOP("toBrowser:TriggerInfo","Trigger Type"),
QT_TRANSLATE_NOOP("toBrowser:TriggerInfo","Triggering Event"),
QT_TRANSLATE_NOOP("toBrowser:TriggerInfo","Table Owner"),
QT_TRANSLATE_NOOP("toBrowser:TriggerInfo","Base Object Type"),
QT_TRANSLATE_NOOP("toBrowser:TriggerInfo","Table Name"),
QT_TRANSLATE_NOOP("toBrowser:TriggerInfo","Column Name"),
QT_TRANSLATE_NOOP("toBrowser:TriggerInfo","Referencing Names"),
QT_TRANSLATE_NOOP("toBrowser:TriggerInfo","When Clause"),
QT_TRANSLATE_NOOP("toBrowser:TriggerInfo","Status"),
QT_TRANSLATE_NOOP("toBrowser:TriggerInfo","Description"),
QT_TRANSLATE_NOOP("toBrowser:TriggerInfo","Action Type"),
QT_TRANSLATE_NOOP("toBrowser:TriggerCols","Column Name"),
QT_TRANSLATE_NOOP("toBrowser:TriggerCols","In Update"),
QT_TRANSLATE_NOOP("toBrowser:TriggerCols","Usage"),
QT_TRANSLATE_NOOP("toTuning:Charts:6LNExecution","Execute"),
QT_TRANSLATE_NOOP("toTuning:Charts:6LNExecution","Hard parse"),
QT_TRANSLATE_NOOP("toTuning:Charts:6LNExecution","Parse"),
QT_TRANSLATE_NOOP("toTuning:Charts:6LNExecution","Calls"),
QT_TRANSLATE_NOOP("toTuning:Charts:6LNExecution","Commit"),
QT_TRANSLATE_NOOP("toTuning:Charts:6LNExecution","Rollbacks"),
QT_TRANSLATE_NOOP("toTuning:Charts:4BAClients","Active"),
QT_TRANSLATE_NOOP("toTuning:Charts:4BAClients","Inactive"),
QT_TRANSLATE_NOOP("toTuning:Charts:4BAClients","System"),
QT_TRANSLATE_NOOP("toResultParam:ListParam","Parameter"),
QT_TRANSLATE_NOOP("toResultParam:ListParam","Value"),
QT_TRANSLATE_NOOP("toResultParam:ListParam","Changed"),
QT_TRANSLATE_NOOP("toResultParam:ListParam","Description"),
QT_TRANSLATE_NOOP("toTuning:LibraryCache","Namespace"),
QT_TRANSLATE_NOOP("toTuning:LibraryCache","Gets"),
QT_TRANSLATE_NOOP("toTuning:LibraryCache","Get Hits"),
QT_TRANSLATE_NOOP("toTuning:LibraryCache","Ratio"),
QT_TRANSLATE_NOOP("toTuning:LibraryCache","Pins"),
QT_TRANSLATE_NOOP("toTuning:LibraryCache","Pin Hits"),
QT_TRANSLATE_NOOP("toTuning:ControlFileRecords","Type"),
QT_TRANSLATE_NOOP("toTuning:ControlFileRecords","Size"),
QT_TRANSLATE_NOOP("toTuning:ControlFileRecords","Total Records"),
QT_TRANSLATE_NOOP("toTuning:ControlFileRecords","Used Records"),
QT_TRANSLATE_NOOP("toTuning:ControlFileRecords","Allocated"),
QT_TRANSLATE_NOOP("toTuning:ControlFileRecords","Used"),
QT_TRANSLATE_NOOP("toTuning:Options","Parameter"),
QT_TRANSLATE_NOOP("toTuning:Options","Enabled"),
QT_TRANSLATE_NOOP("toTuning:License","Sessions Max"),
QT_TRANSLATE_NOOP("toTuning:License","Sessions Warning"),
QT_TRANSLATE_NOOP("toTuning:License","Sessions Current"),
QT_TRANSLATE_NOOP("toTuning:License","Sessions Highwater"),
QT_TRANSLATE_NOOP("toTuning:License","Users Max"),
QT_TRANSLATE_NOOP("toCurrent:Version","Version"),
QT_TRANSLATE_NOOP("toCurrent:ResourceLimit","Resource Name"),
QT_TRANSLATE_NOOP("toCurrent:ResourceLimit","Current Utilization"),
QT_TRANSLATE_NOOP("toCurrent:ResourceLimit","Max Utilization"),
QT_TRANSLATE_NOOP("toCurrent:ResourceLimit","Initial Allocation"),
QT_TRANSLATE_NOOP("toCurrent:ResourceLimit","Limit Value"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","Date"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","00"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","01"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","02"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","03"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","04"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","05"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","06"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","07"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","08"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","09"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","10"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","11"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","12"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","13"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","14"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","15"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","16"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","17"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","18"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","19"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","20"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","21"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","22"),
QT_TRANSLATE_NOOP("toBackup:LogSwitches","23"),
QT_TRANSLATE_NOOP("toBackup:LastBackup","Filename"),
QT_TRANSLATE_NOOP("toBackup:LastBackup","Completion Time"),
QT_TRANSLATE_NOOP("toBackup:LastBackup","Type"),
QT_TRANSLATE_NOOP("toBackup:LastBackup","File Size"),
QT_TRANSLATE_NOOP("toBackup:LastBackup","Bytes Written"),
QT_TRANSLATE_NOOP("toBackup:LastBackup","Level"),
QT_TRANSLATE_NOOP("toBackup:LastBackup","Ckpt Change#"),
QT_TRANSLATE_NOOP("toBackup:LastBackup","Checkpoint Time"),
QT_TRANSLATE_NOOP("toBackup:LastBackup","Mrkd Crpt"),
QT_TRANSLATE_NOOP("toBackup:LastBackup","Media Crpt"),
QT_TRANSLATE_NOOP("toBackup:LastBackup","Logically Corrupt"),
QT_TRANSLATE_NOOP("toBackup:CurrentBackup","Sid"),
QT_TRANSLATE_NOOP("toBackup:CurrentBackup","Serial#"),
QT_TRANSLATE_NOOP("toBackup:CurrentBackup","Context"),
QT_TRANSLATE_NOOP("toBackup:CurrentBackup","So Far"),
QT_TRANSLATE_NOOP("toBackup:CurrentBackup","Total"),
QT_TRANSLATE_NOOP("toBackup:CurrentBackup","% Complete"),
QT_TRANSLATE_NOOP("toBackup:LogHistory","Thread#"),
QT_TRANSLATE_NOOP("toBackup:LogHistory","Sequence#"),
QT_TRANSLATE_NOOP("toBackup:LogHistory","Time Of First Entry"),
QT_TRANSLATE_NOOP("toBackup:LogHistory","Lowest  Scn"),
QT_TRANSLATE_NOOP("toBackup:LogHistory","Highest Scn"),
QT_TRANSLATE_NOOP("toBackup:LogHistory","Controlfile Recid"),
QT_TRANSLATE_NOOP("toBackup:LogHistory","Controlfile Stamp"),
QT_TRANSLATE_NOOP("toResultResources:Information","Sorts"),
QT_TRANSLATE_NOOP("toResultResources:Information"," "),
QT_TRANSLATE_NOOP("toResultResources:Information","Parse"),
QT_TRANSLATE_NOOP("toResultResources:Information","Disk Reads"),
QT_TRANSLATE_NOOP("toResultResources:Information","Buffer Gets"),
QT_TRANSLATE_NOOP("toResultResources:Information","Rows Processed"),
QT_TRANSLATE_NOOP("toResultResources:Information","Executions"),
QT_TRANSLATE_NOOP("toResultResources:Information","Loads"),
QT_TRANSLATE_NOOP("toResultResources:Information","First Load Time"),
QT_TRANSLATE_NOOP("toResultResources:Information","Parsing User Id"),
QT_TRANSLATE_NOOP("toResultResources:Information","Parsing Schema Id"),
QT_TRANSLATE_NOOP("toResultResources:Information","Users Executing"),
QT_TRANSLATE_NOOP("toResultResources:Information","Users Opening"),
QT_TRANSLATE_NOOP("toResultResources:Information","Open Versions"),
QT_TRANSLATE_NOOP("toResultResources:Information","Sharable Mem"),
QT_TRANSLATE_NOOP("toResultResources:Information","Kept Versions"),
QT_TRANSLATE_NOOP("toResultResources:Information","Persistent Mem"),
QT_TRANSLATE_NOOP("toResultResources:Information","Optimizer Mode"),
QT_TRANSLATE_NOOP("toResultResources:Information","Loaded Versions"),
QT_TRANSLATE_NOOP("toResultResources:Information","Runtime Mem"),
QT_TRANSLATE_NOOP("toResultResources:Information","Serializable Aborts"),
QT_TRANSLATE_NOOP("toResultResources:Information","Invalidations"),
QT_TRANSLATE_NOOP("toRollback:Information","Segment"),
QT_TRANSLATE_NOOP("toRollback:Information","Owner"),
QT_TRANSLATE_NOOP("toRollback:Information","Tablespace"),
QT_TRANSLATE_NOOP("toRollback:Information","Status"),
QT_TRANSLATE_NOOP("toRollback:Information","Transactions"),
QT_TRANSLATE_NOOP("toRollback:Information","Initial (MB)"),
QT_TRANSLATE_NOOP("toRollback:Information","Next (MB)"),
QT_TRANSLATE_NOOP("toRollback:Information","PCT Increase"),
QT_TRANSLATE_NOOP("toRollback:Information","Current (MB)"),
QT_TRANSLATE_NOOP("toRollback:Information","Optimal (MB)"),
QT_TRANSLATE_NOOP("toRollback:Information","Used (MB)"),
QT_TRANSLATE_NOOP("toRollback:Information","Extents"),
QT_TRANSLATE_NOOP("toRollback:Information","Current"),
QT_TRANSLATE_NOOP("toRollback:Information","Block"),
QT_TRANSLATE_NOOP("toRollback:Information","Blocks"),
QT_TRANSLATE_NOOP("toRollback:Information","Reads"),
QT_TRANSLATE_NOOP("toRollback:Information","Hitrate"),
QT_TRANSLATE_NOOP("toRollback:TransactionUsers","Rollback Seg"),
QT_TRANSLATE_NOOP("toRollback:Information","Segment"),
QT_TRANSLATE_NOOP("toRollback:Information","Owner"),
QT_TRANSLATE_NOOP("toRollback:Information","Tablespace"),
QT_TRANSLATE_NOOP("toRollback:Information","Status"),
QT_TRANSLATE_NOOP("toRollback:Information","Transactions"),
QT_TRANSLATE_NOOP("toRollback:Information","Initial (MB)"),
QT_TRANSLATE_NOOP("toRollback:Information","Next (MB)"),
QT_TRANSLATE_NOOP("toRollback:Information","PCT Increase"),
QT_TRANSLATE_NOOP("toRollback:Information","Current (MB)"),
QT_TRANSLATE_NOOP("toRollback:Information","Optimal (MB)"),
QT_TRANSLATE_NOOP("toRollback:Information","Used (MB)"),
QT_TRANSLATE_NOOP("toRollback:Information","Extents"),
QT_TRANSLATE_NOOP("toRollback:Information","Current"),
QT_TRANSLATE_NOOP("toRollback:Information","Block"),
QT_TRANSLATE_NOOP("toRollback:Information","Blocks"),
QT_TRANSLATE_NOOP("toRollback:Information","Reads"),
QT_TRANSLATE_NOOP("toRollback:Information","Hitrate"),
QT_TRANSLATE_NOOP("toRollback:TransactionUsers","Rollback Seg"),
QT_TRANSLATE_NOOP("toRollback:TransactionUsers","Session ID"),
QT_TRANSLATE_NOOP("toRollback:TransactionUsers","Os User"),
QT_TRANSLATE_NOOP("toRollback:TransactionUsers","Oracle User"),
QT_TRANSLATE_NOOP("toSession:SessionWait","CPU"),
QT_TRANSLATE_NOOP("toSession:SessionWait","Parallel execution"),
QT_TRANSLATE_NOOP("toSession:SessionWait","DB File Write"),
QT_TRANSLATE_NOOP("toSession:SessionWait","Write Complete"),
QT_TRANSLATE_NOOP("toSession:SessionWait","DB File Read"),
QT_TRANSLATE_NOOP("toSession:SessionWait","DB Single File Read"),
QT_TRANSLATE_NOOP("toSession:SessionWait","Control File I/O"),
QT_TRANSLATE_NOOP("toSession:SessionWait","Direct I/O"),
QT_TRANSLATE_NOOP("toSession:SessionWait","Log file"),
QT_TRANSLATE_NOOP("toSession:SessionWait","SQL*Net"),
QT_TRANSLATE_NOOP("toSession:SessionWait","Other"),
QT_TRANSLATE_NOOP("toSession:SessionIO","Block gets"),
QT_TRANSLATE_NOOP("toSession:SessionIO","Consistent gets"),
QT_TRANSLATE_NOOP("toSession:SessionIO","Physical reads"),
QT_TRANSLATE_NOOP("toSession:SessionIO","Block changes"),
QT_TRANSLATE_NOOP("toSession:SessionIO","Consistent changes"),
QT_TRANSLATE_NOOP("toSession:ConnectInfo","Authentication Type"),
QT_TRANSLATE_NOOP("toSession:ConnectInfo","Osuser"),
QT_TRANSLATE_NOOP("toSession:ConnectInfo","Network Service Banner"),
QT_TRANSLATE_NOOP("toSession:LockedObject","Object Name"),
QT_TRANSLATE_NOOP("toSession:LockedObject","Type"),
QT_TRANSLATE_NOOP("toSession:LockedObject","Locked Mode"),
QT_TRANSLATE_NOOP("toSession:AccessedObjects","OWNER"),
QT_TRANSLATE_NOOP("toSession:AccessedObjects","OBJECT"),
QT_TRANSLATE_NOOP("toSession:AccessedObjects","TYPE"),
QT_TRANSLATE_NOOP("toSession:OpenCursor","SQL"),
QT_TRANSLATE_NOOP("toResultResources:Information","Sorts"),
QT_TRANSLATE_NOOP("toResultResources:Information"," "),
QT_TRANSLATE_NOOP("toResultResources:Information","Parse"),
QT_TRANSLATE_NOOP("toResultResources:Information","Disk Reads"),
QT_TRANSLATE_NOOP("toResultResources:Information","Buffer Gets"),
QT_TRANSLATE_NOOP("toResultResources:Information","Rows Processed"),
QT_TRANSLATE_NOOP("toResultResources:Information","Executions"),
QT_TRANSLATE_NOOP("toResultResources:Information","Loads"),
QT_TRANSLATE_NOOP("toResultResources:Information","First Load Time"),
QT_TRANSLATE_NOOP("toResultResources:Information","Parsing User Id"),
QT_TRANSLATE_NOOP("toResultResources:Information","Parsing Schema Id"),
QT_TRANSLATE_NOOP("toResultResources:Information","Users Executing"),
QT_TRANSLATE_NOOP("toResultResources:Information","Users Opening"),
QT_TRANSLATE_NOOP("toResultResources:Information","Open Versions"),
QT_TRANSLATE_NOOP("toResultResources:Information","Sharable Mem"),
QT_TRANSLATE_NOOP("toResultResources:Information","Kept Versions"),
QT_TRANSLATE_NOOP("toResultResources:Information","Persistent Mem"),
QT_TRANSLATE_NOOP("toResultResources:Information","Optimizer Mode"),
QT_TRANSLATE_NOOP("toResultResources:Information","Loaded Versions"),
QT_TRANSLATE_NOOP("toResultResources:Information","Runtime Mem"),
QT_TRANSLATE_NOOP("toResultResources:Information","Serializable Aborts"),
QT_TRANSLATE_NOOP("toResultResources:Information","Invalidations"),
QT_TRANSLATE_NOOP("toInvalid:ListInvalid","Owner"),
QT_TRANSLATE_NOOP("toInvalid:ListInvalid","Object"),
QT_TRANSLATE_NOOP("toInvalid:ListInvalid","Type")
};
