#include "cell.h"


char Cell::Render(){return code;}

Cage* Cell::GetCage(){return NULL;}

bool Cell::IsCageAvailable() {return false;}

void Cell::InitBoolVisited() {visited = false;}

bool Cell::IsVisited() {return visited;}

void Cell::SetBool(bool x) {visited = x;}

void Cell::SetAbsis(int a) {x = a;}

void Cell::SetOrdinat(int b) {y = b;}

bool Cell::IsCage(){
  return (code=='W' || code=='L' ||code=='F');
}
