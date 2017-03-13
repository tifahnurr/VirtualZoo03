#ifndef SWAN_H
#define SWAN_H

#include "aves.h"

class Swan : public Aves {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas burung angsa*/
    Swan(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas burung angsa*/
    ~Swan();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan burung angsa*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
