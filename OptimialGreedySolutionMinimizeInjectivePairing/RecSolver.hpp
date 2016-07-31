//
//  RecSolver.hpp
//  OptimialGreedySolutionMinimizeInjectivePairing
//
//  Created by Kevin Zhang on 2016-07-31.
//  Copyright © 2016 Kevin Zhang. All rights reserved.
//

#ifndef RecSolver_hpp
#define RecSolver_hpp

#include <stdio.h>
#include "PInfo.hpp"


// Recursive helper function computing Cij
int ComputeC(int i, int j, ProblemInfo *PInfo, int **C);

int RecSolve(ProblemInfo *PInfo);

#endif /* RecSolver_hpp */
