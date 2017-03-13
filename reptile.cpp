#include <iostream>
#include "reptile.h"

using namespace std;

Reptile::Reptile(int w) : Animal(w){}

void Reptile:: Description()
{
  cout << "Hewan reptile ini memiliki darah dingin." << endl;
    
  AnimalDescription();
}
