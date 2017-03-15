#include "lion.h"
#include "cage.h"
#include "cell.h"
#include "land.h"
#include "habitat.h"

int main(){
  Cell* cell;
  Animal* p;
  Habitat* hab;
  hab = new Land(true);
  cell = hab;
  p = new Lion(50);
  cell->GetCage()->SetAnimal(p);
  cell->GetCage()->GetAnimal()->Feed();
}
