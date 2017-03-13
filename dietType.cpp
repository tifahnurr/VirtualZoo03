// file : DietType.cpp
#include "dietType.h"
#include <iostream>

using namespace std;

DietType :: DietType()
{
  portion = umum;
}

DietType :: DietType(int p)
{
  portion = p;
}

DietType :: DietType(const DietType& dt)
{
  p = dt.p;
}

char DietType::getCode(){
  return code;
}

int DietType::getPortion(){
  return portion;
}


