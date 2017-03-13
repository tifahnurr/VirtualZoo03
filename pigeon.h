#ifndef PIGEON_H
#define PIGEON_H

#include "aves.h"

class Pigeon : public Aves {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas merpati*/
    Pigeon(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas merpati*/
    ~Pigeon();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan merpati*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};
#endif
