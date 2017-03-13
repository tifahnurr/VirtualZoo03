#ifndef KOMODO_H
#define KOMODO_H

#include "reptile.h"

class Komodo : public Reptile {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas komodo*/
    Komodo(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas komodo*/
    ~Komodo();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan komodo*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
