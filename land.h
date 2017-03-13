//
//  land.h
//  Header
//
//  Created by Richard Matthew on 3/12/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#ifndef land_h
#define land_h

#include "habitat.h"

class Land : public Habitat
{
    Land();
    
    void waterTree();
    
    void plantTree();
    
    void trimGrass();
};

#endif /* land_h */
