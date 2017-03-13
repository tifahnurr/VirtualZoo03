#include <iostream>
#include <string>
#include "zebra.h"

using namespace std;

Zebra :: Zebra(int w) : weight(w) {
  diet = new Herbivore(70);
  habitat = new char[2];
  habitat[0] = 'l';
  habitat[1] = '0';
  name = "Zebra";
  sound = "*whinny*";
  tame = true;
  is_animal = true;
  number_animal++;
}
    
Zebra :: ~Zebra()
{
  delete diet;
  delete habitat;
}
    
void Zebra :: Interact()
{
  cout << "Zebra berlari di padang rumput" << endl;
  talk();
}
    
void Zebra :: feed()
{  
  cout << "Zebra ";
  DietType.feed;
  cout << "Zebra memakan rumput hijau segar" << endl;
  cout << "*nom* *nom*" << endl;
}
    
void Zebra :: AnimalDescription()
{
  cout << "Zebra adalah binatang dengan warna belang-belang putih dan hitam" << endl;
  cout << "Zebra adalah hewan mamalia dan merupakan hewan herbivora" << endl;
  cout << " Zebra merupaka hewan dari famili kuda. Habitat asli zebra ini tersebar di Afrika" << endl;
  cout << "Belang belang di zebra merupakan salah satu bentuk pertahan yang dimiliki zebra untuk bersembunyi dari predator" << endl;
  
}

