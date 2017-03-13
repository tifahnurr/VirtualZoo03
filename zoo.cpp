#include <stdio.h>
#include "zoo.h"

// @brief Ctor with paramaters
Zoo::Zoo(int p, int l){
  map = new Cell*[p];
  for(int i = 0; i < p ; i++){
        map[i] = new Cell[l];
  }
  // INISIALISASI ZOO
  for (i = 0; i < panjang; i++)
    for (j = 0; j < lebar; j++)
      Peta[i][j] = '0';
}
// @brief Dtor
Zoo::~Zoo(){
  for(int i = 0; i < y; i++){
    delete [] map[i];
  }
  delete [] map;
}
// @brief mengubah cell
void Zoo::SetCell(char c, int i , int j){
	switch (c[i][j]) {
		/*
	    case ('-') : Peta[i][j] = new Route; break;
        case ('W') : Peta[i][j] = new ; break; // ada cage, inisialisasi pointer cage
        case ('F') : Peta[i][j] = new ; break; // ada cage, inisialisasi pointer cage
        case ('L') : Peta[i][j] = new ; break; // ada cage, inisialisasi pointer cage
        case ('w') : Peta[i][j] = new ; break; // habitat aja
        case ('f') : Peta[i][j] = new ; break; // habitat aja
        case ('l') : Peta[i][j] = new ; break; // habitat aja
        case ('P') : Peta[i][j] = new Park; break;
        case ('R') : Peta[i][j] = new Restaurant; break;
        case ('E') : Peta[i][j] = new Entrance; break;
        case ('X') : Peta[i][j] = new Exit; break;
        */
      }
}
// @brief memindahkan hewan
void Zoo::MoveAnimal(int x, int y , int to){
  int tox=x;
  int toy=y;
  int count = 0;
  bool moved = false;
  while ((!moved) && (count<4)){
    count++;
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
      map[tox][toy].setAnimal(map[x][y].getAnimal);
      moved = true;
    } else {
      to = (to % 4) + 1;
    }
  }
}
// @brief mengecek apakah bisa memindahkan hewan
bool Zoo::CanMoveAnimal(int fromx, int fromy, int tox, int toy)
{
  return (map[fromx][fromy]== map[tox][toy]) && (map[tox][toy].isCageEmpty);
}

void LoadMap(char * map_name){
  ifstream file ("map.txt");
  string line;
  if(file.is_open()){
    for(i = 0; i < panjang; i++){
        string row;
        if (file >> row){
          for (j = 0; j != min<int>(lebar,row.length()); ++j){
            Peta[i][j] = row[j];
        }
      } else break;
    }
  }
  file.close();
}
