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
#include <algorithm>

#define Inf 100000


using namespace std;


// Recursive helper function computing Cij
int ComputeC(int i, int j, ProblemInfo *PInfo, int **C) {
    // Compute C[i,j]
    // Remember to store the resulting value in C array
    if (i == 0 || j==0) {
        C[i][j] = abs(PInfo->S[0] - PInfo->H[0]);
        return C[i][j];
    }
    if (i < j) {
        //dont be here!
    }
    
    C[i-1][j-1]= ComputeC(i-1, j-1, PInfo, C);
    
    if (i==j) {
        C[i][j] = C[i-1][j-1] + abs(PInfo->S[i-1]-PInfo->H[j-1]);
        return C[i][j];
    }
    //else
    C[i-1][j]= ComputeC(i-1, j, PInfo, C); //for the following lines
    
    C[i][j] = min(C[i-1][j], (C[i-1][j-1] + abs(PInfo->S[i-1]-PInfo->H[j-1])));
    
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




