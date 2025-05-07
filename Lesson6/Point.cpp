// Point.cpp
#include "Point.h"
#include<cmath>

Point::Point(int _x, int _y) :x(_x), y(_y)
{
}

bool Point::operator!=(Point p)
{
    return x != p.x || y != p.y;
}

ostream& operator<<(ostream& os, Point p)
{
    //(5,4)
    os << '(' << p.x << ',' << p.y << ')' << endl;
    return os;
}

istream& operator>>(istream& is, Point& p)
{
    //(5,4)
    char ch;
    is >> ch >> p.x >> ch >> p.y >> ch; //(8,7)
    return is;
}
