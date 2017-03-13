#ifndef ZEBRA_H
#define ZEBRA_H

#include "mammal.h"

class Zebra : public Mammal {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas zebra*/
    Zebra(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas zebra*/
    ~Zebra();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan zebra*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
