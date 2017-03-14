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
    /** @brief GetAnimal
      * Fungsi virtual dummy agar dapat digunakan oleh kelas child*/ 
    virtual Animal* GetAnimal();
    
    /** @brief SetAnimal
      * Fungsi virtual dummy agar dapat digunakan oleh kelas child*/
    virtual void SetAnimal(Animal *x);
    
    
    /**@brief GetHabitat.
      *Fungsi virtual dummy agar dapat digunakan oleh kelas child*/
    virtual char GetHabitat();
    
    /**@brief IsCageAvailable.
      * Fungsi virtual dummy agar dapat digunakan oleh kelas child*/
    virtual bool IsCageAvailable();
   
    
    /** @brief GetCage
      * Fungsi virtual dummy agar dapat digunakan oleh kelas child*/ 
    virtual Cage* GetCage();
    
	/**@brief PurifyAir
	 * Fungsi virtual dummy agar dapat digunakan oleh kelas child*/
    virtual void PurifyAir();
    
    /**@brief CleanNet
     * Fungsi virtual dummy agar dapat digunakan oleh kelas child*/
    virtual void CleanNet();
    
    
    /**@brief waterTree.
      *Fungsi virtual dummy agar dapat digunakan oleh kelas child*/
    virtual void WaterTree();
    
    /**@brief plantTree. 
      *Fungsi virtual dummy agar dapat digunakan oleh kelas child*/
    virtual void PlantTree();
    
    /**@brief trimGrass.
      *Fungsi virtual dummy agar dapat digunakan oleh kelas child */
    virtual void TrimGrass();
    
    /**@brief cleanWater
     * Fungsi virtual dummy agar dapat digunakan oleh kelas child*/
    virtual void CleanWater();
    
    /**@brief putWPlant
     * Fungsi virtual dummy agar dapat digunakan oleh kelas childr*/
    virtual void PutWPlant();
    
    /**@brief putRock
     * Fungsi virtual dummy agar dapat digunakan oleh kelas child */
    virtual void PutRock();
    
    virtual char Render();
    
    /**@brief InitBoolVisited
     * menginisialisasi boolean visited dengan false (belum dikunjungi) */
    void Cell::InitBoolVisited()
    
    /**@brief IsVisited
     * Fungsi yang mempresentasikan apakah cell sudah dikunjungi atau belum */
    bool IsVisited();
    
    /**@brief SetBool
     * Fungsi mengganti boolean visited cell */
    void Cell::SetBool(bool x)
    
    /**@brief SetAbsis
     * mengubah koordinat absis cell */
    void SetAbsis(int a);
    
    /**@brief SetOrdinat
     * mengubah koordinat ordinat cell */
    void SetOrdinat(int b);
		
	protected:
		char code;
		int x;
		int y;
    		bool visited;
	
};

#endif
