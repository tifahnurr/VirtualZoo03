#ifndef AVES_H
#define AVES_H

#include "animal.h"

class Aves : public Animal{
	public:
        /**@brief Constructor
         * alokasi untuk aves */
        Aves(int w);
    
		/**@brief Interaksi.
		 * Berinteraksi dengan hewan aves*/
		virtual void Interact()=0;
		
		/**@brief Description.
		 * Menjelaskan secara umum tentang hewan tersebut*/
		void Description();
		
		/**@brief AnimalDescription.
		 * Menjelaskan secara khusus tentang hewan*/
		virtual void AnimalDescription()=0;
};
#endif