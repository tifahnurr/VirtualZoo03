//
//  water.h
//  Header
//
//  Created by Richard Matthew on 3/12/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#ifndef water_h
#define water_h

#include "habitat.h"


/** @class Water
  * Kelas Water untuk membuat habitat water
  */
class Water : public Habitat
{
    /**@brief Constructor.
     * Mengkonstruksi kelas Water
     * @param make_cage Status saat pembuatan habitat water, apakah akan dibuat cage atau bukan*/
    Water(bool make_cage);
    
    /**@brief cleanWater
     * membersihkan air di habitat air*/
    void cleanWater();
    
    /**@brief putWPlant
     * Meletakkan tanaman air di habitat air*/
    void putWPlant();
    
    /**@brief putRock
     * meletakkan batu di habitat air */
    void putRock();
    
};

#endif /* water_h */
