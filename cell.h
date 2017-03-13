#ifndef CELL_H
#define CELL_H
#include "point.h"

class Cell{
	public:
		Cell(char Type, Point P): Type(type);
		~Cell();
			
	protected:
		char type;
};

#endif
