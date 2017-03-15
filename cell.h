#ifndef CELL_H
#define CELL_H
#include "renderable.h"
#include "animal.h"
#include "cage.h"

using namespace std;

/** @class Cell
 * Kelas Cell untuk membuat cell
 */
class Cell : public Renderable{
public:
  virtual void Interact()=0;
  
  virtual char Render();
  
  virtual Cage* GetCage();
  
  virtual bool IsCageAvailable();
  
  /**@brief InitBoolVisited
   * menginisialisasi boolean visited dengan false (belum dikunjungi) */
  void InitBoolVisited();
  
  /**@brief IsVisited
   * Fungsi yang mempresentasikan apakah cell sudah dikunjungi atau belum */
  bool IsVisited();
  
  /**@brief SetBool
   * Fungsi mengganti boolean visited cell */
  void SetBool(bool x);
  
  /**@brief SetAbsis
   * mengubah koordinat absis cell */
  void SetAbsis(int a);
  
  /**@brief SetOrdinat
   * mengubah koordinat ordinat cell */
  void SetOrdinat(int b);
  
  bool IsCage();
		
protected:
		char code;
		int x;
		int y;
  bool visited = false;
  
};

#endif
