#ifndef CMAZEALGORITHM_HPP_INCLUDED
#define CMAZEALGORITHM_HPP_INCLUDED

#include "../CMaze.hpp"

class CMazeAlgorithm
{
    public:
        CMazeAlgorithm();
        virtual ~CMazeAlgorithm();
        virtual void Execute(CMaze& maze) =0;

    protected:
        bool Uncarved(CMaze& maze, int x, int y);
        virtual bool MazeIsDone(CMaze &maze);
};

#endif // CMAZEALGORITHM_HPP_INCLUDED
