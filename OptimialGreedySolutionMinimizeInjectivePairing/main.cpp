//
//  main.cpp
//  OptimialGreedySolutionMinimizeInjectivePairing
//
//  Created by Kevin Zhang on 2016-07-31.
//  Copyright © 2016 Kevin Zhang. All rights reserved.
//

#include <iostream>
#include "RecSolver.hpp"
#include "IterSolver.hpp"
#include "PInfo.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    bool IterMode = true, RecMode = true;
    if (argc != 2) {
        cout << "Recursive Usage: \"Match R < sample.in\"" << endl;
        cout << "Iterative Usage: \"Match I < sample.in\"" << endl;
        return 0;
    }
    
    if (argv[1][0] == 'I') {
        RecMode = false;
    } else if (argv[1][0] == 'R') {
        IterMode = false;
    } else {
        cout << "Recursive Usage: \"Match R < sample.in\"" << endl;
        cout << "Iterative Usage: \"Match I < sample.in\"" << endl;
        return 0;
    }
    
    ProblemInfo *PInfo = new ProblemInfo();
    PInfo->Read();
    
    if (IterMode) {
        cout << " " << IterSolve(PInfo) << endl;
    }
    if (RecMode) {
        cout << " " << RecSolve(PInfo) << endl;
    }
    
    // delete PInfo;
    return 0;
}