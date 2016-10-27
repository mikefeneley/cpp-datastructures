#include "point.h"


Point::Point()
{
    xcord = 0;
    ycord = 0;
}

Point::Point(long x, long y)
{
   xcord = x;
   ycord = y; 
}


Direction Point::directionFrom(long x, long y)
{
    Direction direction;


}

Direction Point::inQuadrant(double xLo, double xHi, double yLo, double yHi)
{
    Direction quadrant;


    return NOQUADRANT;
}

bool Point::inBox(double xLo, double xHi, double yLo, double yHi)
{
    return true;
}



