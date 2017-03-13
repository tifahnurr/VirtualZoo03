#ifndef TIGER_H
#define TIGER_H

#include "mammal.h"

class Tiger : public Mammal {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas harimau*/
    Tiger(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas harimau*/
    ~Tiger();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan harimau*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
