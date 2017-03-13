#ifndef ZOO_H
#define ZOO_H
#include "cell.h"
#include "cage.h"

class Zoo{
  public:
    /** @brief Ctor with parameters
     */
    Zoo(int p, int l);
    
    /** @brief Dtor
     */
    ~Zoo();
    
    /** @brief mengubah cell
     */
    void SetCell(char c, int x , int y);
    
    /** @brief memindahkan hewan
     */
    void MoveAnimal(int x, int y , int to);
    
    /**@brief mengecek apakah bisa memindahkan hewan
     */
    bool CanMoveAnimal(int fromx, int fromy, int tox, int toy);
    /**@brief load file eksternal map
     */
    void LoadMap(char * map_name);
  
  private:
    Cell **map;
};

#endif
