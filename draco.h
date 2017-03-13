#ifndef DRACO_H
#define DRACO_H

#include "reptile.h"

class Draco : public Reptile {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas bunglon terbang*/
    Draco(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas bunglon terbang*/
    ~Draco();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan bunglon terbang*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
