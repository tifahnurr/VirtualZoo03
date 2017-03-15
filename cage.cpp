
#include <iostream>
#include "cage.h"
#include "lion.h"

Cage::Cage()
{
  penghuni = nAnimal;
}

bool Cage::IsCageEmpty()
{
  return penghuni !=nAnimal;
}

Animal* Cage::GetAnimal()
{
  return penghuni;
}

void Cage::SetAnimal(Animal* x)
{
  penghuni = x;
}

void Cage::ClearAnimal()
{
  penghuni = nAnimal;
}
