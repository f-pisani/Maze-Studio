#include "CMazeAlgorithmHuntAndKill.hpp"

CMazeAlgorithmHuntAndKill::CMazeAlgorithmHuntAndKill()
{

}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// PUBLIC METHODS
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void CMazeAlgorithmHuntAndKill::Execute(CMaze& maze)
{
    srand(time(NULL));
    
    SCoordinate coordinate(rand()%maze.Width(), rand()%maze.Height());
    do
    {
        Walk(maze, coordinate.x, coordinate.y);
        coordinate = Hunt(maze);
    }while(!MazeIsDone(maze));
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// PRIVATE METHODS
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void CMazeAlgorithmHuntAndKill::Walk(CMaze& maze, int x, int y)
{
    std::vector<SCoordinate> unvisited_neighbors;

    if(x-1 >= 0 && Uncarved(maze, x-1, y))
        unvisited_neighbors.push_back(SCoordinate(x-1, y)); // Left cell

    if(x+1 < maze.Width() && Uncarved(maze, x+1, y))
        unvisited_neighbors.push_back(SCoordinate(x+1, y)); // Right cell

    if(y-1 >= 0 && Uncarved(maze, x, y-1))
        unvisited_neighbors.push_back(SCoordinate(x, y-1)); // Top cell

    if(y+1 < maze.Height() && Uncarved(maze, x, y+1))
        unvisited_neighbors.push_back(SCoordinate(x, y+1)); // Bottom cell

    if(unvisited_neighbors.size() >= 1)
    {
        int i = rand()%unvisited_neighbors.size();

        if(unvisited_neighbors[i].x < x)
        {
            maze.CarveLeftWall(x, y);
            Walk(maze, unvisited_neighbors[i].x, unvisited_neighbors[i].y);
        }
        else if(unvisited_neighbors[i].x > x)
        {
            maze.CarveRightWall(x, y);
            Walk(maze, unvisited_neighbors[i].x, unvisited_neighbors[i].y);
        }
        else if(unvisited_neighbors[i].y < y)
        {
            maze.CarveTopWall(x, y);
            Walk(maze, unvisited_neighbors[i].x, unvisited_neighbors[i].y);
        }
        else if(unvisited_neighbors[i].y > y)
        {
            maze.CarveBottomWall(x, y);
            Walk(maze, unvisited_neighbors[i].x, unvisited_neighbors[i].y);
        }
    }
}


SCoordinate CMazeAlgorithmHuntAndKill::Hunt(CMaze& maze)
{
    SCoordinate coordinate(-1, -1);

    for(int y=0; y<maze.Height(); ++y)
    {
        for(int x=0; x<maze.Width(); ++x)
        {
            if(Uncarved(maze, x, y))
            {
                std::vector<SCoordinate> visited_neighbors;

                if(x-1 >= 0 && !Uncarved(maze, x-1, y))
                    visited_neighbors.push_back(SCoordinate(x-1, y)); // Left cell

                if(x+1 < maze.Width() && !Uncarved(maze, x+1, y))
                    visited_neighbors.push_back(SCoordinate(x+1, y)); // Right cell

                if(y-1 >= 0 && !Uncarved(maze, x, y-1))
                    visited_neighbors.push_back(SCoordinate(x, y-1)); // Top cell

                if(y+1 < maze.Height() && !Uncarved(maze, x, y+1))
                    visited_neighbors.push_back(SCoordinate(x, y+1)); // Bottom cell

                if(visited_neighbors.size() >= 1)
                {
                    int i = rand()%visited_neighbors.size();

                    if(visited_neighbors[i].x < x)
                    {
                        maze.CarveLeftWall(x, y);
                        Walk(maze, visited_neighbors[i].x, visited_neighbors[i].y);
                    }
                    else if(visited_neighbors[i].x > x)
                    {
                        maze.CarveRightWall(x, y);
                        Walk(maze, visited_neighbors[i].x, visited_neighbors[i].y);
                    }
                    else if(visited_neighbors[i].y < y)
                    {
                        maze.CarveTopWall(x, y);
                        Walk(maze, visited_neighbors[i].x, visited_neighbors[i].y);
                    }
                    else if(visited_neighbors[i].y > y)
                    {
                        maze.CarveBottomWall(x, y);
                        Walk(maze, visited_neighbors[i].x, visited_neighbors[i].y);
                    }

                    coordinate.x = x;
                    coordinate.y = y;

                    break;
                }
            }
        }
    }

    return coordinate;
}
