#ifndef HIPPO_H
#define HIPPO_H

#include "mammal.h"

/** @class Hippo
  * Kelas Hippo untuk membuat hewan kudanil
  */
class Hippo : public Mammal {
  public:
    /**@brief Konstruktor.
     * Mengkonstruksi kelas kuda nil*/
    Hippo(int w);
    
    /**@brief Destruktor.
     * Mengdealokasi parameter pada kelas kuda nil*/
    ~Hippo();
    
    /**@brief Interaksi.
     * Berinteraksi dengan hewan kuda nil*/
    void Interact();
    
    /**@brief AnimalDescription.
     * Menjelaskan secara khusus mengenai hewan*/
    void AnimalDescription();
};

#endif
