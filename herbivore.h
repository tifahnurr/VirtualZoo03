//
//  herbivore.h
//  Header
//
//  Created by Richard Matthew on 3/13/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#ifndef herbivore_h
#define herbivore_h

#include "dietType.h"

class Herbivore : public DietType{
    
     /**@brief Constructor.
     * Constructor tanpa parameter*/
    Herbivore();
   
    /**@brief Constructor.
     * Constructor dengan parameter*/
		/**@param p porsi yang dibutuhkan oleh suatu animal*/
    Herbivore(int p);
    
    /**@brief feed.
     * Memberi makan hewan berdasarkan jenis makanannya*/
    void feed();
    
};

#endif /* herbivore_h */
