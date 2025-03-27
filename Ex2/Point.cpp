#include "Point.h"
#include <math.h>

//Point::Point() 
//	: x(0), y(0)
//{
//	//x = 0;
//	//y = 0;
//}

Point::Point(float _x, float _y)
	: x(_x), y(_y)
{
	//x = _x;
	//y = _y;
}

void Point::setX(float _x)
{
	x = _x;
}

void Point::setY(float _y)
{
	y = _y;
}

float Point::getX() const
{
	return x;
}
float Point::getY() const
{
	return y;
}

float Point::distance(const Point& p2) const
{
	float d = sqrt(pow(x - p2.getX(), 2) + pow(y- p2.getY(),2)) ;
	
	return d;
}

