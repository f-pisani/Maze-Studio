QT += core
QT -= gui
TEMPLATE = app
CONFIG += c++11

TARGET = Generator

SOURCES +=  main.cpp \
            ../CMaze.cpp \
            CMazeAlgorithm.cpp \
            CMazeAlgorithmHuntAndKill.cpp

HEADERS	+=  ../CMaze.hpp \
	    CMazeAlgorithm.hpp \
	    CMazeAlgorithmHuntAndKill.hpp
