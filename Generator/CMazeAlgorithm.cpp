#include "CMazeAlgorithm.hpp"

CMazeAlgorithm::CMazeAlgorithm()
{

}


CMazeAlgorithm::~CMazeAlgorithm()
{

}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// PROTECTED METHODS
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool CMazeAlgorithm::Uncarved(CMaze& maze, int x, int y)
{
    if(x >= 0 && y >= 0)
    {
        SMazeCell cell(maze.GetWalls(x, y));

        if(cell.walls.test(CMaze::WallTop) && cell.walls.test(CMaze::WallBottom) &&
           cell.walls.test(CMaze::WallLeft) && cell.walls.test(CMaze::WallRight))
        {
            return true;
        }
    }

    return false;
}


bool CMazeAlgorithm::MazeIsDone(CMaze &maze)
{
    for(int y=0; y<maze.Height(); ++y)
    {
        for(int x=0; x<maze.Width(); ++x)
        {
            if(Uncarved(maze, x, y))
                return false;
        }
    }

    return true;
}
