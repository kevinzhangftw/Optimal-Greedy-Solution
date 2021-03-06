//
//  IterSolver.cpp
//  OptimialGreedySolutionMinimizeInjectivePairing
//
//  Created by Kevin Zhang on 2016-07-31.
//  Copyright © 2016 Kevin Zhang. All rights reserved.
//

#include "IterSolver.hpp"
#include "PInfo.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;


int IterSolve(ProblemInfo *PInfo) {
//    int Result = 999999999;
    int m = PInfo->m;
    int n = PInfo->n;
    int* S = PInfo->S;
    int* H = PInfo->H;
    //first we create a dynamic table
    int A[m+1][n+1];
    
    //now we fill out the first row of table since we know what it will be
    int differenceBetweenSkierandSkiWhenOnlyOnePair = abs(S[0]-H[0]);

    //first row of the table is filled because there is only one person
    for (int j = 1; j <= n; j++){
        A[1][j]= differenceBetweenSkierandSkiWhenOnlyOnePair;
    }
    
    //now we need to fill out the table when there are more skis than skiers
    int sum = abs(S[0]-H[0]);
    for (int i = 1; i<=m; i++){
        for (int j = 1; j<=n; j++){
            if (i==j){
                sum = sum + abs(S[i]-H[j]);
                A[i][j] = sum;
            }else if (i > j){
                A[i][j] = min(A[i-1][j], A[i-1][j-1] + (S[i]-H[j]));
            }else{
                //not suppose to be here!
            }
        }
    }
    
    
    
    
    return A[m][n];
    
}
