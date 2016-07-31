//
//  PInfo.hpp
//  OptimialGreedySolutionMinimizeInjectivePairing
//
//  Created by Kevin Zhang on 2016-07-31.
//  Copyright © 2016 Kevin Zhang. All rights reserved.
//

#ifndef PInfo_hpp
#define PInfo_hpp

#include <stdio.h>

struct ProblemInfo {
    int m, n;
    int *S; // Skis
    int *H; // Skiers
    
    ~ProblemInfo();
    
    void Read();
    
};

#endif /* PInfo_hpp */
