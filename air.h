//
//  air.h
//  Header
//
//  Created by Richard Matthew on 3/12/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#ifndef air_h
#define air_h

#include "habitat.h"

class Air : public Habitat
{
	/**@brief Constructor
	 * Mengalokasi parameter-parameter air*/
    Air();
   
	/**@brief PurifyAir
	 * Membersihkan udara dalam kandang*/
    void PurifyAir();
    
    /**@brief CleanNet
     * Membersihkan jaring*/
    void CleanNet();
    
    
};

#endif /* air_h */
