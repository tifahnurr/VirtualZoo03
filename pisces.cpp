//
//  pisces.cpp
//  Header
//
//  Created by Richard Matthew on 3/13/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#include <iostream>
#include "pisces.h"
using namespace std;
Pisces::Pisces(int w) : Animal(w) {}

void Pisces::Description()
{
  cout << "A fish is any member of a group of animals that consist of all gill-bearing aquatic craniate animals that lack limbs with digits." << endl;
  // sumber: https://en.wikipedia.org/wiki/Fish
  
  AnimalDescription();
}
