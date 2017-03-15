#include <stdio.h>
#include <fstream>
#include "zoo.h"
#include "water.h"
#include "land.h"
#include "air.h"
#include "route.h"
#include "gate.h"
#include "restaurant.h"
#include "park.h"
#include "lion.h"
#include "giraffe.h"
#include "eagle.h"
#include "snake.h"
#include "sting_ray.h"
#include "butterfly.h"
#include "penguin.h" //
#include "tiger.h"
#include "shark.h"
#include "zebra.h"
#include "bat.h"
#include "hippo.h"
#include "pigeon.h"
#include "swan.h"
#include "cendrawasih.h"
#include "blue_tang.h"
#include "clown_fish.h"
#include "Crocodile.h"
#include "draco.h"
#include "komodo.h"
#include "roach.h"
#include "mantis.h"
#include "dragonfly.h"
using namespace std;

// @brief Ctor with paramaters
Zoo::Zoo(int _p, int _l) : p(_p) , l(_l){
  map = new Cell**[p];
  for(int i = 0; i < p ; i++){
        map[i] = new Cell*[l];
  }
  animal = new Animal*[40];
}
// @brief Dtor
Zoo::~Zoo(){
  for(int i = 0; i < p; i++){
    delete [] map[i];
  }
  delete [] map;
}
// @brief mengubah cell
void Zoo::SetCell(char c, int i , int j){
  switch (c) {
      case ('-') : map[i][j] = new Route; break;
        case ('W') : map[i][j] = new Water(true); break; // ada cage, inisialisasi pointer cage
        case ('F') : map[i][j] = new Air(true); break; // ada cage, inisialisasi pointer cage
        case ('L') : map[i][j] = new Land(true); break; // ada cage, inisialisasi pointer cage
        case ('w') : map[i][j] = new Water(false); break; // habitat aja
        case ('f') : map[i][j] = new Air(false); break; // habitat aja
        case ('l') : map[i][j] = new Land(false); break; // habitat aja
        case ('P') : map[i][j] = new Park; break;
        case ('R') : map[i][j] = new Restaurant; break;
        case ('E') : map[i][j] = new Gate('E'); break;
        case ('X') : map[i][j] = new Gate('X'); break;
      }
}
// @brief memindahkan hewan
void Zoo::MoveAnimal(int x, int y){
  int to = (rand()%4)+1;
  int count = 0;
  bool moved = false;
  while ((!moved) && (count<4)){
    count++;
    int tox=x;
    int toy=y;
    switch (to){
      case 1 :
        tox++;
        break;
      case 2:
        toy++;
        break;
      case 3:
        tox--;
        break;
      case 4:
        toy--;
        break;
        }
    if (CanMoveAnimal(x,y,tox,toy)){
      map[tox][toy]->GetCage()->SetAnimal(map[x][y]->GetCage()->GetAnimal());
      map[x][y]->GetCage()->ClearAnimal();
      moved = true;
    } else {
      to = (to % 4) + 1;
    }
  }
}
/** @brief mengecek apakah bisa memindahkan hewan
 *  prekondisi, map[fromx][fromy] adalah habitat dengan cage
 */
bool Zoo::CanMoveAnimal(int fromx, int fromy, int tox, int toy)
{
  return ((map[fromx][fromy]->GetHabitat() == map[tox][toy]->GetHabitat()) && (map[tox][toy]->IsCageAvailable()));
}

Cell* Zoo::GetCell(int i, int j)
{
  return map[i][j];
}
int Zoo::GetPanjang(){
  return p;
}

int Zoo::GetLebar(){
  return l;
}

int Zoo::GetEntP(){ return ent_p;};

int Zoo::GetEntL(){return ent_l;};

int Zoo::GetNAnimal(){
  return n_animal;
}

void Zoo::SetAnimals(){
  Animal* eagle1 = new Eagle(60);
  if (GetCell(1,1)->GetCage()!=NULL){
    GetCell(1,1)->GetCage()->SetAnimal(eagle1);
    GetCell(1,1)->GetCage()->GetAnimal()->SetX(1);
    GetCell(1,1)->GetCage()->GetAnimal()->SetY(1);
    animal[n_animal]=eagle1;
    n_animal++;
  }
  Animal* blue_tang1 = new BlueTang(60);
  if (GetCell(0,13)->GetCage()!=NULL){
    GetCell(0,13)->GetCage()->SetAnimal(blue_tang1);
    GetCell(0,13)->GetCage()->GetAnimal()->SetX(13);
    GetCell(0,13)->GetCage()->GetAnimal()->SetY(0);
    animal[n_animal]=blue_tang1;
    n_animal++;
  }
  Animal* butterfly1 = new Butterfly(60);
  if (GetCell(2,18)->GetCage()!=NULL){
    GetCell(2,18)->GetCage()->SetAnimal(butterfly1);
    GetCell(2,18)->GetCage()->GetAnimal()->SetX(18);
    GetCell(2,18)->GetCage()->GetAnimal()->SetY(2);
    animal[n_animal]=butterfly1;
    n_animal++;
  }
  Animal* draco1 = new Draco(60);
  if (GetCell(3,22)->GetCage()!=NULL){
    GetCell(3,22)->GetCage()->SetAnimal(draco1);
    GetCell(3,22)->GetCage()->GetAnimal()->SetX(28);
    GetCell(3,22)->GetCage()->GetAnimal()->SetY(0);
    animal[n_animal]=draco1;
    n_animal++;
  }
  Animal* giraffe1 = new Giraffe(60);
  if (GetCell(3,13)->GetCage()!=NULL){
    GetCell(3,13)->GetCage()->SetAnimal(giraffe1);
    GetCell(3,13)->GetCage()->GetAnimal()->SetX(13);
    GetCell(3,13)->GetCage()->GetAnimal()->SetY(3);
    animal[n_animal]=giraffe1;
    n_animal++;
  }
  Animal* lion1 = new Lion(60);
  if (GetCell(1,26)->GetCage()!=NULL){
    GetCell(1,26)->GetCage()->SetAnimal(lion1);
    GetCell(1,26)->GetCage()->GetAnimal()->SetX(26);
    GetCell(1,26)->GetCage()->GetAnimal()->SetY(1);
    animal[n_animal]=lion1;
    n_animal++;
  }
  Animal* pigeon1 = new Pigeon(60);
  if (GetCell(2,30)->GetCage()!=NULL){
    GetCell(2,30)->GetCage()->SetAnimal(pigeon1);
    GetCell(2,30)->GetCage()->GetAnimal()->SetX(30);
    GetCell(2,30)->GetCage()->GetAnimal()->SetY(2);
    animal[n_animal]=pigeon1;
    n_animal++;
  }
  Animal* roach1 = new Roach(60);
  if (GetCell(2,33)->GetCage()!=NULL){
    GetCell(2,33)->GetCage()->SetAnimal(roach1);
    GetCell(2,33)->GetCage()->GetAnimal()->SetX(33);
    GetCell(2,33)->GetCage()->GetAnimal()->SetY(2);
    animal[n_animal]=roach1;
    n_animal++;
  }
  Animal* penguin1 = new Penguin(60);
  if (GetCell(1,36)->GetCage()!=NULL){
    GetCell(1,36)->GetCage()->SetAnimal(penguin1);
    GetCell(1,36)->GetCage()->GetAnimal()->SetX(36);
    GetCell(1,36)->GetCage()->GetAnimal()->SetY(1);
    animal[n_animal]=penguin1;
    n_animal++;
  }
  /*Animal* lion = new Lion(60);
  if (GetCell(0,28)->GetCage()!=NULL){
    GetCell(0,28)->GetCage()->SetAnimal(lion);
    GetCell(0,28)->GetCage()->GetAnimal()->SetX(28);
    GetCell(0,28)->GetCage()->GetAnimal()->SetY(0);
    animal[n_animal]=lion;
    n_animal++;
  }
  Animal* lion = new Lion(60);
  if (GetCell(0,28)->GetCage()!=NULL){
    GetCell(0,28)->GetCage()->SetAnimal(lion);
    GetCell(0,28)->GetCage()->GetAnimal()->SetX(28);
    GetCell(0,28)->GetCage()->GetAnimal()->SetY(0);
    animal[n_animal]=lion;
    n_animal++;
  }
  Animal* lion = new Lion(60);
  if (GetCell(0,28)->GetCage()!=NULL){
    GetCell(0,28)->GetCage()->SetAnimal(lion);
    GetCell(0,28)->GetCage()->GetAnimal()->SetX(28);
    GetCell(0,28)->GetCage()->GetAnimal()->SetY(0);
    animal[n_animal]=lion;
    n_animal++;
  }
  Animal* lion = new Lion(60);
  if (GetCell(0,28)->GetCage()!=NULL){
    GetCell(0,28)->GetCage()->SetAnimal(lion);
    GetCell(0,28)->GetCage()->GetAnimal()->SetX(28);
    GetCell(0,28)->GetCage()->GetAnimal()->SetY(0);
    animal[n_animal]=lion;
    n_animal++;
  }
  Animal* lion = new Lion(60);
  if (GetCell(0,28)->GetCage()!=NULL){
    GetCell(0,28)->GetCage()->SetAnimal(lion);
    GetCell(0,28)->GetCage()->GetAnimal()->SetX(28);
    GetCell(0,28)->GetCage()->GetAnimal()->SetY(0);
    animal[n_animal]=lion;
    n_animal++;
  }
  Animal* lion = new Lion(60);
  if (GetCell(0,28)->GetCage()!=NULL){
    GetCell(0,28)->GetCage()->SetAnimal(lion);
    GetCell(0,28)->GetCage()->GetAnimal()->SetX(28);
    GetCell(0,28)->GetCage()->GetAnimal()->SetY(0);
    animal[n_animal]=lion;
    n_animal++;
  }
  Animal* lion = new Lion(60);
  if (GetCell(0,28)->GetCage()!=NULL){
    GetCell(0,28)->GetCage()->SetAnimal(lion);
    GetCell(0,28)->GetCage()->GetAnimal()->SetX(28);
    GetCell(0,28)->GetCage()->GetAnimal()->SetY(0);
    animal[n_animal]=lion;
    n_animal++;
  }
  Animal* lion = new Lion(60);
  if (GetCell(0,28)->GetCage()!=NULL){
    GetCell(0,28)->GetCage()->SetAnimal(lion);
    GetCell(0,28)->GetCage()->GetAnimal()->SetX(28);
    GetCell(0,28)->GetCage()->GetAnimal()->SetY(0);
    animal[n_animal]=lion;
    n_animal++;
  }
  Animal* lion = new Lion(60);
  if (GetCell(0,28)->GetCage()!=NULL){
    GetCell(0,28)->GetCage()->SetAnimal(lion);
    GetCell(0,28)->GetCage()->GetAnimal()->SetX(28);
    GetCell(0,28)->GetCage()->GetAnimal()->SetY(0);
    animal[n_animal]=lion;
    n_animal++;
  }
  Animal* lion = new Lion(60);
  if (GetCell(0,28)->GetCage()!=NULL){
    GetCell(0,28)->GetCage()->SetAnimal(lion);
    GetCell(0,28)->GetCage()->GetAnimal()->SetX(28);
    GetCell(0,28)->GetCage()->GetAnimal()->SetY(0);
    animal[n_animal]=lion;
    n_animal++;
  }
  Animal* lion = new Lion(60);
  if (GetCell(0,28)->GetCage()!=NULL){
    GetCell(0,28)->GetCage()->SetAnimal(lion);
    GetCell(0,28)->GetCage()->GetAnimal()->SetX(28);
    GetCell(0,28)->GetCage()->GetAnimal()->SetY(0);
    animal[n_animal]=lion;
    n_animal++;
  }{
    GetCell(0,28)->GetCage()->SetAnimal(lion);
    GetCell(0,28)->GetCage()->GetAnimal()->SetX(28);
    GetCell(0,28)->GetCage()->GetAnimal()->SetY(0);
    animal[n_animal]=lion;
    n_animal++;
  }
   */
}
