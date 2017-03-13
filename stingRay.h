#ifndef STINGR_H
#define STINGR_H

#include "pisces.h"

class stingRay : public Pisces {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas pari*/
    stingRay(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas pari*/
    ~stingRay();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan pari*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
