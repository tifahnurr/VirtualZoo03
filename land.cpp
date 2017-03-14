//
//  land.cpp
//  Header
//
//  Created by Richard Matthew on 3/12/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#include <iostream>
#include "land.h"

Land::Land(bool make_cage): Habitat(make_cage)
{
  if (make_cage)
    {
        cage = new Cage;
        
    }
 else
    {
        cage = nil_cage;
    }
    
}
void Land::WaterTree()
{
  cout << "Watering the trees" << endl;
}
void Land::PlantTree()
{
  cout << "Planting trees" << endl;
}

void Land::TrimGrass()
{
  cout << "Trimming the grass" << endl;
}
