#! /bin/bash

if [ "$QTTYPE" = "4" ]; then
	sudo apt-get install -y libqt4-webkit libqtwebkit-dev qt4-qmake qt4-dev-tools libqt4-dev
fi

if [ "$QTTYPE" = "5" ]; then
	sudo apt-get install -y qt5-qmake qtbase5-dev qtdeclarative5-dev libqt5webkit5-dev libsqlite3-dev
	sudo apt-get install -y qt5-default qttools5-dev-tools
	export QMAKE=/usr/lib/x86_64-linux-gnu/qt5/bin/qmake
fi

sudo apt-get purge libboost*1.46*
sudo apt-get install libboost1.55-dev
sudo apt-get install libqscintilla2-dev cmake libloki-dev xvfb g++-4.9
sudo update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-4.9 80 --slave /usr/bin/g++ g++ /usr/bin/g++-4.9
#sudo update-alternatives --config gcc
