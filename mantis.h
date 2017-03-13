#ifndef MANTIS_H
#define MANTIS_H

#include "insect.h"

class Mantis : public Insect {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas belalang*/
    Mantis(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas belalang*/
    ~Mantis();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan belalang*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
