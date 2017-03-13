#include "lion.h"

int Animal::number_animal=0;
int main(){
  Animal *sss;
  sss = new Lion;
  sss->Interact();
  sss->feed();
  sss->Description();
}
