#include <QtGlobal>

#include "../CMaze.hpp"
#include "CMazeAlgorithmHuntAndKill.hpp"

int main(int argc, char *argv[])
{
    /* Command Line Arguments
     * 0 : ---------- (App path)
     * 1 : MAZE WIDTH
     * 2 : MAZE HEIGHT
     * 3 : MAZE ALGORITHM
     */
    if(argc != 4)
        qFatal("You can't use it as a standalone. Use MazeStudio instead.");

    int maze_width(QString(argv[1]).toInt()),
        maze_height(QString(argv[2]).toInt());
    QString maze_algorithm(argv[3]);

    CMaze maze(maze_width, maze_height);
    // Select an algorithm
    CMazeAlgorithm* generator(nullptr);
    if(maze_algorithm == "HuntAndKill")
        generator = new CMazeAlgorithmHuntAndKill;

    // GENERATOR !
    if(generator != nullptr)
    {
        generator->Execute(maze);
        delete generator;

        maze.Export("default.maze");

        return 0;
    }
    else
        return -1;
}
