#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
#include "Renderable.h"



class Animal : public Renderable{
  public:
    /**@brief Constructor.
     * Mengalokasikan parameter class Animal*/
    Animal();
    
    /**@brief Destructor.
     * Mendealokasi parameter dari class Animal*/
    ~Animal();
    
    /**@brief Interact.
     * Melakukan interaksi dengan hewan*/
    virtual void Interact()=0;
    
    /**@brief getName.
     * Mengembalikan nama dari hewan*/
    std::string GetName();
             
    /**@brief GetDiet.
     * Mengembalikan jenis pemakan apakah hewan tersebut*/
    diet_type GetDiet();
                
    /**@brief GetHabitat.
     * Mengembalikan jenis habitat dari hewan*/
    char* GetHabitat();
                
    /**@brief Feed.
     * Memberikan makanan kepada hewan*/
    void Feed();
                
    /**@brief ChangeTame.
     * Mengubah kondisi jinak tidaknya hewan*/
    /**@param _tame kondisi jinak yang ingin diubah*/
    void ChangeTame(bool _tame);
                
    /**@brief Talk.
     * Berbicara dengah hewan*/
    void Talk();
                
    /**@brief Description.
     * Menjelaskan secara umum tentang hewan tersebut*/
    virtual void Description()=0;
                
    /**@brief AnimalDesc.
     * Menjelaskan secara khusus tentang hewan*/                
    virtual void AnimalDescription()=0;
                
    /**@brief Render.
     * Mengembalikan karakter tampilan untuk hewan*/
    char Render();
    
    /**@brief CalculateFood.
     * Menghitung gram makanan untuk hewan*/
    int CalculateFood();
    
    static int number_animal;
    
  protected:
    DietType* diet;
    char* habitat;
    char code;
    std::string name;
    std::string sound;
    bool tame;
    bool is_animal;
    const int weight;

};

#endif
