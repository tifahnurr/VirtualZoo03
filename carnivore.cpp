#include <iostream>
#include "carnivore.h"
using namespace std;
Carnivore::Carnivore() : DietType()
{
  code = 'c';
}

Carnivore::Carnivore(int p):DietType(p)
{
  code = 'c';
}

void Carnivore::feed()
{
  cout << "diberikan daging seberat " << portion << " gr" << endl;
}
