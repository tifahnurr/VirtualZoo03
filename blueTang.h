#ifndef BLUETANG_H
#define BLUETANG_H

#include "pisces.h"

class BlueTang : public Pisces {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas ikan blue tang*/
    BlueTang(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas ikan blue tang*/
    ~BlueTang();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan ikan blue tang*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
