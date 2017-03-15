
#include <iostream>
#include "cage.h"
#include "lion.h"

using namespace std;

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

void Cage::Interact(){
  if (GetAnimal()!=nAnimal){
    cout<<"Kandang ini berisi hewan"<<endl;
    GetAnimal()->Interact();
  } else {
    cout<<"Kandang ini kosong"<<endl;
  }
}
