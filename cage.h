//
//  cage.h
//  Header
//
//  Created by Richard Matthew on 3/12/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#ifndef cage_h
#define cage_h
#include "animal.h"
class Cage

{
public:
    Cage();
    
    bool isAvailable();
    
    Animal& getAnimal();
    
    void setAnimal(Animal &x);
    
    
private:
    Animal nAnimal = Nil;
    Animal penghuni;
    
};

#endif /* cage_h */
