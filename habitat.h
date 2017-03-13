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

class Habitat : public Cell
{
public:
    
    Habitat (bool make_cage);
    
    ~Habitat();
    char GetHabitat();
    
    bool IsCageAvailable();
    
protected :
    Cage *nil_cage = NULL ;
    Cage *cage;
    char habitat;
};


#endif /* habitat_h */
