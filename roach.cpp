#include <iostream>
#include <string>
#include "roach.h"

using namespace std;

roach :: roach(int w) : weight(w)
{
  diet = new Omnivore(20);
  habitat = new char[2];
  habitat[0] = 'l';
  habitat[1] = 'a';
  code='r';
  name = "Kecoak";
  sound = "...";
  tame = true;
  is_animal = true;
  number_animal++;
}
    
roach :: ~roach()
{
  delete diet;
  delete habitat;
}
    
void roach :: Interact()
{
  cout << "Kecoak menyusuri kandang yang ada dengan menggunakan kaki kaki kecilnya. " << endl;
  cout << "Kecoak terkadang menggerakkan antenanya, dan bahkan mengepakkan sayapnya untuk melayang di udara." << endl;
  talk();
}
    
void roach :: feed()
{
  cout << "Kecoa ";
  DietType.feed;
  cout << "Kecoa memakan benda benda mati atau yang tidak bergerak lain." << endl;
  cout << "Kecoa suka sumber makanan yang kaya karbohidrat, protein dan lipid, juga makan tumbuhan dan makanan yang berserat." << endl;
}
    
void roach :: AnimalDescription()
{
  cout << "Kecoa terdapat hampir di seluruh belahan bumi, kecuali di wilayah kutub." << endl;
  cout << "Kecoa sering dianggap sebagai hama dalam bangunan, walaupun tidak semua kecoa yang termasuk kategori hama." << endl;
}
