#include <iostream>
#include <string>
#include "snake.h"

using namespace std;

snake :: snake(int w) : weight(w){
  diet = new Carnivore(100);
  habitat = new char[2];
  habitat[0] = 'l';
  habitat[1] = '0';
  name = "Ular";
  sound = "ssssshhhhh~";
  tame = true;
  is_animal = true;
  number_animal++;
}
    
snake :: ~snake()
{
  delete diet;
  delete habitat;
}
    
void snake :: Interact()
{
  cout << "Ular melingkar di pohon sambil beristirahat." << endl;
  cout << "Terkadang, ia berdesis sambil menjulurkan lidahnya" << endl;
  talk();
}
    
void snake :: feed()
{
  cout << "Ular ";
  DietType.feed;
  cout << "Ular memakan mangsa yang telah disediakan." << endl;
  cout << "Tikus yang malang itu, kini sudah menjadi santapan ular." << endl;
}
    
void snake :: AnimalDescription()
{
  cout << "Ular adalah reptilia tak berkaki dan bertubuh panjang." << endl;
  cout << "Ular memiliki sisik seperti kadal dan digolongkan ke dalam reptil bersisik." << endl;
}
