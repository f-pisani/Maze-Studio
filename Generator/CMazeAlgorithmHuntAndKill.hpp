#ifndef CMAZEALGORITHMHUNTANDKILL_HPP
#define CMAZEALGORITHMHUNTANDKILL_HPP

#include <math.h>
#include <time.h>

#include "CMazeAlgorithm.hpp"

class CMazeAlgorithmHuntAndKill : public CMazeAlgorithm
{
    public:
        CMazeAlgorithmHuntAndKill();
        void Execute(CMaze& maze);

    private:
        void Walk(CMaze& maze, int x, int y);
        SCoordinate Hunt(CMaze& maze);
};

#endif // CMAZEALGORITHMHUNTANDKILL_HPP
