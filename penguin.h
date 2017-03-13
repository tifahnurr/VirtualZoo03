#ifndef PENGUIN_H
#define PENGUIN_H

#include "aves.h"

/** @class Penguin.
  * Kelas Penguin untuk membuat hewan penguin
  */
class Penguin : public Aves {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas pinguin*/
    Penguin(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas pinguin*/
    ~Penguin();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan pinguin*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
