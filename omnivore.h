#ifndef omnivore_h
#define omnivore_h

#include "dietType.h"

class Omnivore : public DietType{
  public:
    /**@brief Constructor.
     * Constructor tanpa parameter*/
    Omnivore();
   
    /**@brief Constructor.
     * Constructor dengan parameter*/
		/**@param p porsi yang dibutuhkan oleh suatu animal*/
    Omnivore(int p);
    
    /**@brief feed.
     * Memberi makan hewan berdasarkan jenis makanannya*/
    void Feeds(int feed);
    
    
};

#endif /* omnivore_h */
