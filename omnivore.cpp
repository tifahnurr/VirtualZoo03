//
//  omnivore.cpp
//  Header
//
//  Created by Richard Matthew on 3/13/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#include <iostream>
#include "omnivore.h"

using namespace std;
Omnivore::Omnivore() : DietType()
{
  code = 'o';
}

Omnivore::Omnivore(int p):DietType(p)
{
  code = 'o';
}

void Omnivore::Feeds(int feed)
{
  cout << "diberikan campuran daging dan tanaman seberat " << feed << " gr" << endl;
}
