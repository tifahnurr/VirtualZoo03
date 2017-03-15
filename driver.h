#ifndef DRIVER_H
#define DRIVER_H
#include "point.h"
#include "zoo.h"

class Driver{
  public:
    static void PrintMap(Zoo&, Point&);
    static void Tour(Zoo&);
    static void CheckAround(Zoo&, Point&);
    static void CalculateFeed(Zoo&);
    static bool IsValid(Zoo&, Point&);
};

#endif
