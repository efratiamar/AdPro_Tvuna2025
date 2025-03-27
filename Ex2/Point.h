#pragma once

class Point
{
	float x;
	float y;
public:
	//Point();
	Point(float _x = 0, float _y = 0);
	void setX(float _x);
	void setY(float _y);
	float getX() const;
	float getY() const;

	float distance(const Point& p2) const;

};