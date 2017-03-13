#include <iostream>
#include <string>
#include "mantis.h"

using namespace std;

mantis :: mantis(int w) : weight(w){
  diet = new Herbivore(10);
  habitat = new char[2];
  habitat[0] = 'l';
  habitat[1] = '0';
  code='m';
  name = "Belalang sembah";
  sound = "...";
  tame = true;
  is_animal = true;
  number_animal++;
}
    
mantis :: ~mantis(){
  delete diet;
  delete habitat;
}
    
void mantis :: Interact(){
  cout << "Belalang hampir selalu tidak terlihat di habitat aslinya." << endl;
  cout << "Mereka berkamuflase dengan bersembunyi menyerupai daun." << endl;
  talk();
}
    
void mantis :: AnimalDescription(){
  cout << "Belalang sembah adalah serangga yang termasuk ke dalam ordo mantodea." << endl;
  cout << "Mereka disebut praying mantis karena sikapnya yang seringkali kelihatan seperti sedang berdoa. " << endl;
}
