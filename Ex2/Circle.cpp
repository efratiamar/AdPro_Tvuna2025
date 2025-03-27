#include "Circle.h"

//Circle::Circle()
//	: radius(1), center() //call the ctor of float and Point
//{
//	/*
//	//option 2
//	center.setX(0);
//	center.setY(0);
//	*/
//}

Circle::Circle(float _r, float _x, float _y)
	: radius(_r), center(_x, _y)
{
}

Circle::Circle(const Circle& c2)
{
	radius = c2.radius;
	
	//option 1
	//center.setX(c2.center.getX());
	//center.setY(c2.center.getY());
	
	//option 2
	center = c2.center; //operator= of Point class
}


void Circle::setRadius(float r)
{
	radius = r;
}

float Circle::getRadius() const
{
	return radius;
}

Point Circle::getCenter() const
{
	return center;
}

void Circle::setCenter(float _x, float _y)
{
	center.setX(_x);
	center.setY(_y);
}

float Circle::getArea() const
{
	return PI * radius * radius;
}

float Circle::getPerimeter() const
{
	return 2 * PI * radius;
}

OnInOut Circle::isOnInOut(const Point& p1) const
{
	float dis = center.distance(p1);

	if (dis > radius)
		return OUT;

	if (dis < radius)
		return IN;
		
	return ON;
}
