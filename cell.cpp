#include "cell.h"

Animal* Cell::GetAnimal() {return NULL;}

void Cell::SetAnimal(Animal *x){}

char Cell::GetHabitat() {return ' ';}

bool Cell::IsCageAvailable() {return false;}

Cage* Cell::GetCage(){return NULL;}

void Cell::PurifyAir(){}

void Cell::CleanNet(){}

void Cell::WaterTree(){}

void Cell::PlantTree(){}

void Cell::TrimGrass(){}

void Cell::CleanWater(){}

void Cell::PutWPlant(){}

void Cell::PutRock(){}

char Cell::Render(){return code;}

void Cell::InitBoolVisited() {visited = false;}

bool Cell::IsVisited() {return visited;}

void Cell::SetBool(bool x) {visited = x;}

void Cell::SetX(int a) {x = a;}

void Cell::SetY(int b) {y = b;}
