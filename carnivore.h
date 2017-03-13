//
//  carnivore.h
//  Header
//
//  Created by Richard Matthew on 3/13/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#ifndef carnivore_h
#define carnivore_h

#include "dietType.h"


class Carnivore : public DietType{
     
    /**@brief Constructor.
     * Constructor tanpa parameter*/
    Carnivore();
   
    /**@brief Constructor.
     * Constructor dengan parameter*/
		/**@param p porsi yang dibutuhkan oleh suatu animal*/
    Carnivore(int p);
    
    /**@brief feed.
     * Memberi makan hewan berdasarkan jenis makanannya*/
    void feed();
};

#endif /* carnivore_h */
