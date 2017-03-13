#include "draco.h"
  /*protected:
    DietType* diet;
    char* habitat;
    string name;
    string sound;
    bool tame;
    bool is_animal;*/


Draco::Draco(int w) : weight(w){
  diet = new Carnivore(20);
  habitat = new char[2];
  habitat[0]='a';
  habitat[1]='l';
  code='D';
  name = "Bunglon terbang";
  sound= "...";
  tame = false;
  is_animal=true;
  number_animal++;
}
  
Draco::~Draco(){
  delete diet;
  delete habitat;
}

void Draco::Interact(){
  std::cout<<"Bunglon terbang membuka selaput kulitnya"<<std::endl;
  std::cout<<"Dia berpindah dengan cara terbang"<<std::endl;
  talk();
}

void Draco::AnimalDescription(){
  std::cout<<"Jenis reptil yang memiliki kulit tipis berfungsi sebagai sayap"<<std::endl;
}
