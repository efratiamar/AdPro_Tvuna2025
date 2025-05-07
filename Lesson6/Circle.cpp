////////////////////////////////////////////
#include "Circle.h"	// Circle.cpp
const double PI = 3.14;
double Circle::area() {
    return PI * radius * radius;
}
double Circle::perimeter() {
    return 2 * PI * radius;
}

int Circle::onInOut(Point p) {
    double d = sqrt(pow(center.x - p.x, 2)
        + pow(center.y - p.y, 2));
    return d - radius;
}
