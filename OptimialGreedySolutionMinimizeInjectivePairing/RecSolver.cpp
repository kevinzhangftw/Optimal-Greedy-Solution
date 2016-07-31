//
//  RecSolver.cpp
//  OptimialGreedySolutionMinimizeInjectivePairing
//
//  Created by Kevin Zhang on 2016-07-31.
//  Copyright © 2016 Kevin Zhang. All rights reserved.
//

#include "RecSolver.hpp"
#include <cstdlib>
#include "PInfo.hpp"

#define Inf 100000


using namespace std;


// Recursive helper function computing Cij
int ComputeC(int i, int j, ProblemInfo *PInfo, int **C) {
    // Compute C[i,j]
    // Remember to store the resulting value in C array
    //
    //
    //
    //
    //
    
    return C[i][j];
    
}


int RecSolve(ProblemInfo *PInfo) {
    int **C;
    C = new int*[PInfo->m + 1];
    for (int i = 0; i <= PInfo->m; ++i)
    {
        C[i] = new int[PInfo->n + 1];
        for (int j = 0; j <= PInfo->n; ++j)
        {
            C[i][j] = -1; // Or Inf
        }
        
    }
    
    C[0][0] = 0;
    
    return ComputeC(PInfo->m, PInfo->n, PInfo, C);
    
}




