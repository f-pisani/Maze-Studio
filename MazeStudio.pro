QT  +=	core gui widgets
TEMPLATE = app
CONFIG	+=  c++11

TARGET = MazeStudio

SOURCES	+=  main.cpp\
	    MainApp.cpp
		   
HEADERS	+=  MainApp.hpp

FORMS	+=  MainApp.ui

SUBDIRS	+=  Generator \
	    MazeViewer
