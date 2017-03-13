#ifndef INSECT_H
#define INSECT_H

#include "animal.h"

class Insect : public Animal{
	public:
		/**@brief Interaksi.
		 * Berinteraksi dengan hewan insect*/
		virtual void Interact()=0;
		
		/**@brief Description.
		 * Menjelaskan secara umum tentang hewan tersebut*/
		void Description();
		
		/**@brief AnimalDescription.
		 * Menjelaskan secara khusus tentang hewan*/
		virtual void AnimalDescription()=0;
};

#endif
