#include <QDebug>
#include <iostream>

#include "../CMaze.hpp"
#include "CMazeViewer.hpp"

int main(int argc, char *argv[])
{
    if(argc != 2)
        qFatal("You can't use it as a standalone. Use MazeStudio instead.");

    std::string MazeFile(argv[1]);
    CMaze Maze;
    if(!Maze.Load(MazeFile))
        qFatal("Unable to load Maze File.");

    CMazeViewer Viewer(Maze);
    Viewer.setTitle("MazeViewer [\""+MazeFile+"\"]");

    while(Viewer.isOpen())
        Viewer.Update();

    return 0;
}
