#include <iostream>
#include "insect.h"

using namespace std;

Insect :: Insect(int w) : Animal(w){};

void Insect:: Description()
{
  cout << "Hewan termasuk ke dalam jenis serangga atau insecta." << endl;
  
  AnimalDescription();
}
