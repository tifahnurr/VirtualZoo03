//
//  herbivore.cpp
//  Header
//
//  Created by Richard Matthew on 3/13/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#include <iostream>
#include "herbivore.h"

using namespace std;
Herbivore::Herbivore() : DietType()
{
  code = 'h';
}

Herbivore::Herbivore(int p):DietType(p)
{
  code = 'h';
}

void Herbivore::feed()
{
    cout << "diberikan tanaman seberat " << portion << " gr" << endl;
}
