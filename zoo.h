#ifndef ZOO_H
#define ZOO_H
#include "cell.h"
#include "cage.h"
#include "facility.h"

/** @class Zoo
 * Kelas Zoo untuk membuat Zoo dengan ukura tertentu
 */
class Zoo{
public:
  /**@brief Ctor with parameters
   * Mengkonstruksi kelas Zoo
   * @param p Nilai panjang dari luas virtual zoo
   * @param l NIlai lebar dari luas virtual zoo*/
  Zoo(int p, int l);
  
  /** @brief Dtor
   * Mengdealokasi parameter dari kelas zoo
   */
  ~Zoo();
  
  /**@brief mengubah cell
   * Mendefinisikan tipe dari cell
   * @param c Tipe dari cell
   * @param x Lokasi x dari cell yang akan di definisikan
   * @param y Lokasi y dari cell yang akan di definisikan
   */
  void SetCell(char c, int x , int y);
  
  /** @brief MoveAnimal
   * Memindahkan animal
   * @param x Lokasi x dari animal yang akan dipindahkan
   * @param y Lokasi y dari animal yang akan dipindahkan
   */
  void MoveAnimal(int x, int y );
  
  /**@brief CanMoveAnimal
   * mengecek apakah bisa memindahkan hewan
   */
  bool CanMoveAnimal(int fromx, int fromy, int tox, int toy);
  
  /**@brief GetCell
   * mengembalikan cell ke i,j
   */
  Cell* GetCell(int i, int j);
  
  /**@brief GetPanjang
   * mengembalikan panjang dari peta
   */
  int GetPanjang();
  
  /**@brief GetLebar
   * mengembalikan lebar dari peta
   */
  int GetLebar();
  
  /**@brief GetNAnimal
   * Mengembalikan banyan animal yang sudah dibangun
   */
  int GetNAnimal();
  
  /**@brief SetAnimals
   * mengeset animal secara otomatis
   */
  void SetAnimals();
  
  /**@brief GetEntP
   * Mengembalikan koordinat memanjang dari titik masuk
   */
  int GetEntP();
  
  /**@brief GetEntL
   * mengembalikan koordinat melebar dari titik masuk
   */
  int GetEntL();
private:
  Cell ***map;
  Animal **animal;
  const int p;
  const int l;
  static int n_animal;
  int ent_p;
  int ent_l;
};

#endif
