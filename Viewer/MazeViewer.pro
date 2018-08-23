QT  +=  core
QT  -=  gui
TEMPLATE    =   app

TARGET  =   MazeViewer

SOURCES +=  main.cpp \
	    ../CMaze.cpp \
	    CMazeViewer.cpp

HEADERS	+=  ../CMaze.hpp \
	    CMazeViewer.hpp

CONFIG	+=  C++11
CONFIG(release, debug|release): LIBS	+=  -lsfml-audio -lsfml-graphics -lsfml-main -lsfml-network -lsfml-window -lsfml-system
CONFIG(debug, debug|release): LIBS  +=	-lsfml-audio-d -lsfml-graphics-d -lsfml-main-d -lsfml-network-d -lsfml-window-d -lsfml-system-d

LIBS	+=  -LY:/IDE/SFML-2.3.2/lib
INCLUDEPATH +=	Y:/IDE/SFML-2.3.2/include
DEPENDPATH  +=	Y:/IDE/SFML-2.3.2/include
