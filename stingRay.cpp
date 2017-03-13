#include <iostream>
#include <string>
#include "stingRay.h"

using namespace std;

stingRay :: stingRay(int w) : weight(w){
  diet = new Herbivore(70);
  habitat = new char[2];
  habitat[0] = 'w';
  habitat[1] = '0';
  name = "Ikan pari";
  sound = "...";
  tame = true;
  is_animal = true;
  number_animal++;
}
    
stingRay :: ~stingRay()
{
  delete diet;
  delete habitat;
}
    
void stingRay :: Interact()
{
  cout << "Ikan pari berenang mengitari aquarium yang terbatas luasnya." << endl;
  cout << "Ikan pari mengepakkan 'sayap'nya dalam berenang." << endl;
  talk();
}
    
void stingRay :: feed()
{
  cout << "Ikan pari ";
  DietType.feed;
  cout << "Ikan pari memakan plankton yang tersebar di dalam aquarium." << endl;
  cout << "Ikan pari makan plankton dengan cara membuka mulutnya sambil berenang, sehingga plankton masuk ke dalam mulutnya." << endl;
}
    
void stingRay :: AnimalDescription()
{
  cout << "Ikan pari memiliki sirip yang panjangnya cukup panjang, sehingga bisa membantu dalam berenang." << endl;
  cout << "Ikan pari dapat ditemuka di lautan tropis di seluruh dunia. Persebaran yang luas dan penampilannya yang unik" << endl;
  cout << "menyebabkan ikan ini memiliki banyak nama." << endl;
}
