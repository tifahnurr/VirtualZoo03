#include <iostream>
#include <string>
#include "pigeon.h"

using namespace std;

pigeon :: pigeon(int w) : weight(w)
{
  diet = new Herbivore(40);
  habitat = new char[2];
  habitat[0] = 'a';
  habitat[1] = '0';
  code='p';
  name = "Burung merpati";
  sound = "Krrrr... Krrrr....";
  tame = true;
  is_animal = true;
  number_animal++;
}
    
pigeon :: ~pigeon()
{
  delete diet;
  delete habitat;
}
    
void pigeon :: Interact()
{
  cout << "Burung dara cukup sulit untuk di pegang, ia akan terbang ketika kita mendekat." << endl;
  cout << "Namun burung dara akan mendekat ketika ada makanan di dekatnya." << endl;
  talk();
}
    
void pigeon :: feed()
{
  cout << "Burung merpati terbang mendekat lalu berkumpul ketika makanan datang dan siap di tabur." << endl;
  cout << "Ketika biji bijian yang merupakan makanan dari burung merpati di tabur, burung burung ini" << endl;
  cout << "sontak berkumpul dan memakan biji biji yang sudah di taburkan." << endl;
}
    
void pigeon :: AnimalDescription()
{
  cout << "Burung merpati terdapat di seluruh duniam namun varietas terbesar terdapat di indomaata." << endl;
  cout << "Burung merpati membangun sangkarnya dari ranting dan sisa-sisa lainnya." << endl;
}
