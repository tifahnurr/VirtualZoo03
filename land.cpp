//
//  land.cpp
//  Header
//
//  Created by Richard Matthew on 3/12/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#include <iostream>
#include "land.h"

Land::Land()
{
  habitat = 'l';
}
void Land::waterTree()
{
  cout << "Watering the trees" << endl;
}
void Land::plantTree()
{
  cout << "Planting trees" << endl;
}

void Land::trimGrass()
{
  cout << "Trimming the grass" << endl;
}
