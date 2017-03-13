#ifndef CLOWNF_H
#define CLOWNF_H

#include "pisces.h"

class clownFish : public Pisces {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas ikan badut*/
    clownFish(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas ikan badut*/
    ~clownFish();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan ikan badut*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
