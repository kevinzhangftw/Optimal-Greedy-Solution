//
//  PInfo.cpp
//  OptimialGreedySolutionMinimizeInjectivePairing
//
//  Created by Kevin Zhang on 2016-07-31.
//  Copyright © 2016 Kevin Zhang. All rights reserved.
//

#include "PInfo.hpp"
#include <iostream>

using namespace std;


ProblemInfo::~ProblemInfo() {
    delete[] S;
    delete[] H;
}

void ProblemInfo::Read() {
    cin >> m >> n;
    S = new int[m];
    H = new int[n];
    for (int i = 0; i < m; ++i) {
        cin >> S[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> H[i];
    }
}