#ifndef ZOO_H
#define ZOO_H

class Zoo{
  public:
    /** @brief Ctor
     */
    Zoo();
    
    /** @brief Ctor with parameters
     */
    Zoo(int p, int l);
    
    /** @brief Dtor
     */
    ~Zoo();
    
    /** @brief mengubah cell
     */
    void SetCell(Cell c, int x , int y);
    
    /** @brief memindahkan hewan
     */
    void MoveAnimal(int x, int y , int to);
    
    /**@brief mengecek apakah bisa memindahkan hewan
     */
    bool CanMoveAnimal(int fromx, int fromy, int tox, int toy);
  
  
  private:
    Cell **map;
    const int defaultSize = 30;
};

#endif
