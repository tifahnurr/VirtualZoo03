#include <iostream>
#include "aves.h"

using namespace std;
Aves::Aves(int w) : Animal(w){};

void Aves:: Description()
{
  cout << "Hewan tersebut termasuk ke dalam hewan aves atau unggas." << endl;
  
  AnimalDescription();
}
