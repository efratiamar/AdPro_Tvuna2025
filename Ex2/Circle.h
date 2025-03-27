#pragma once
#include "Point.h"

const float PI = 3.14;
enum OnInOut {ON = 0, IN = -1, OUT = 1 };

class Circle
{
	Point center;
	float radius;
public:
	//Circle();
	Circle(float _r = 1, float _x = 0, float _y = 0);
	Circle(const Circle& c2);

	void setRadius(float r);
	float getRadius() const;

	Point getCenter() const;
	void setCenter(float _x, float _y);

	float getArea() const;
	float getPerimeter() const;

	OnInOut isOnInOut(const Point& p1) const;

};
