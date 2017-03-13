//
//  mammal.h
//  Header
//
//  Created by Richard Matthew on 3/13/17.
//  Copyright © 2017 MatthewRichard20. All rights reserved.
//

#ifndef mammal_h
#define mammal_h

#include "animal.h"


/** @class Mammal
  * Kelas Mammal untuk membuat hewan tipe mamalia
  */
class Mammal : public Animal{
public:
    /**@brief Constructor
     * alokasi untuk mammal 
     * @param w Nilai berat badan hewan tipe mamalia*/
    Mammal(int w);
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan mamalia*/
    virtual void Interact()=0;
    
    /**@brief Feed.
     * Memberi makan hewan mamalia*/
    virtual void Feed()=0;
    
    /**@brief Description.
     * Menjelaskan secara umum tentang hewan tersebut*/
    void Description();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus tentang hewan*/
    virtual void AnimalDescription()=0;
};

#endif /* mammal_h */
