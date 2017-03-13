#include <iostream>
#include <string>
#include "penguin.h"

using namespace std;

penguin :: penguin(int w) : weight(w)
{
  diet = new Carnivore(30);
  habitat = new char[2];
  habitat[0] = 'a';
  habitat[1] = 'l';
  code='P';
  name = "Penguin";
  sound = "...";
  tame = true;
  is_animal = true;
  number_animal++;
}
    
penguin :: ~penguin()
{
  delete diet;
  delete habitat;
}
    
void penguin :: Interact()
{
  cout << "Penguin bermain main dengan 'arena' yang telah dibuat di kandangnya" << endl;
  cout << "Mereka berseluncur di 'arena' mereka dengan menggunakan perut mereka" << endl;
  talk();
}
    
void penguin :: feed()
{
  cout << "Penguin ";
  DietType.feed;
  cout << "Ketika penjaga keluar membawa seember ikan segar, penguin langsung bergerak mengerumuni penjaga." << endl;
  cout << "Penjaga melemparkan ikan, dan satu per satu ikan tadi dilahap habis oleh penguin." << endl;
}
    
void penguin :: AnimalDescription()
{
  cout << "Penguin adalah hewan akuatik jenis burung yang tidak bisa terbang dan secara umum hidup di belahan bumi selatan." << endl;
  cout << "Penguin terlihat tidak takut dengan manusia, bahkan mendekati peneliti yang sedang mempelajari mereka. " << endl;
}
