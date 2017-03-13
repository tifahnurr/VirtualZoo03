#ifndef GIRAFFE_H
#define GIRAFFE_H

#include "mammal.h"

class Giraffe : public Mammal {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas jerapah*/
    Giraffe(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas jerapah*/
    ~Giraffe();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan jerapah*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
