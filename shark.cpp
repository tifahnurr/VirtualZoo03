#include <iostream>
#include <string>
#include "shark.h"

using namespace std;

shark :: shark(int w) : weight(w)
{
  diet = new Carnivore(80);
  habitat = new char[2];
  habitat[0] = 'w';
  habitat[1] = '0';
  code='S';
  name = "Hiu";
  sound = "...";
  tame = false;
  is_animal = true;
  number_animal++;
}
    
shark :: ~shark()
{
  delete diet;
  delete habitat;
}
    
void shark :: Interact()
{
  cout << "Hiu bergerak menyusuri aquarium yang ada." << endl;
  talk();
}
    
void shark :: feed()
{
  cout << "Hiu ";
  DietType.feed;
  cout << "Hiu sudah bersiap di bagian atas aquarium. " << endl;
  cout << "ia menunggu penjaga memberikannya makanan berupa ikan segar" << endl;
}
    
void shark :: AnimalDescription()
{
  cout << "Hiu merupakan salah satu hewan ganas yang terdapat di air." << endl;
  cout << "Hiu mempunyai tubuh yang dilapisi kulit dermal denticle yang melindungi mereka dari kerusakan dari parasit." << endl;
  cout << "Hiu juga diceritakan dalam beberapa mitologi di hawaii, yaitu cerita tenatng manusia hiu." << endl;
}
