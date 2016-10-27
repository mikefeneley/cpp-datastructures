#ifndef _POINT
#define _POINT


enum Direction {NW, SW, SE, NE, NOQUADRANT};

#include "compareable.h"


class Point : public Compareable
{
    public:
        Point();
        Point(long x, long y);
        long getX();
        long getY();

        Direction directionFrom(long x, long y);
        Direction inQuadrant(double xLo, double xHi, double yLo, double yHi);
        bool inBox(double xLo, double xHi, double yLo, double yHi);


    private: 
        long xcord;
        long ycord;


};

#endif
