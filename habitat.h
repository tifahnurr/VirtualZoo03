//
//  habitat.h
//  Header
//
//  Created by Richard Matthew on 3/12/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#ifndef habitat_h
#define habitat_h

#include "cell.h"
#include "cage.h"
using namespace std;
class Habitat : public Cell
{
    char GetHabitat();
    
protected :
    Cage cage;
    char habitat;
};


#endif /* habitat_h */
