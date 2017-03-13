#include <iostream>
#include <string>
#include "swan.h"

using namespace std;

Swan :: Swan(int w) : weight(w){
  diet = new Herbivore(80);
  habitat = new char[2];
  habitat[0] = 'l';
  habitat[1] = 'w';
  name = "Angsa";
  sound = "honk";
  tame = true;
  is_animal = true;
  number_animal++;
}
    
Swan :: ~Swan()
{
  delete diet;
  delete habitat;
}
    
void Swan :: Interact()
{
  cout << "Angsa berenang renang dengan indahnya di danau" << endl;
  cout << "Mereka berkumpul bersama temannya, berenang kesana kemari." << endl;
  talk();
}
    
void Swan :: feed()
{
  cout << "Angsa ";
  DietType.feed;
  cout << "Angsa merupakan hewan herbivora. Mereka memakan tanaman akuatik dan tanaman dalam air." << endl;
  cout << "Di perairan, mereka mendapatkan makanan mereka dengan menyaring air," << endl;
  cout << " dan makanan mereka terdiri dari akar-akaran, batang dan daun tanaman air." << endl;
}
    
void Tiger :: AnimalDescription()
{
  cout << "Angsa adalah burung air berukuran dari genus cygnus famili anatidae. " << endl;
  cout << " Angsa umumnya terdapat di daerah beriklim sedang, jarang terdapat di daerah tropis." << endl;
