#pragma once
#include<iostream>
using namespace std;

class Shape
{
protected:
	string name;
public:
	Shape(string n);
	virtual float area() = 0;
	void print();
	virtual void details() = 0;
};
//Shape.cpp
Shape::Shape(string n) :name(n)
{}
void Shape::print()
{
	cout << name << ":\t";
	details();
	cout << "area:\t" << area() << endl;
}


class Square :public Shape
{
private:
	int side;
public:
	Square(int s);
	float area();
	void details();
};
Square::Square(int s) :Shape("Square"), side(s) {}
float Square::area() { return side * side; }
void Square::details() { cout << side << "\t"; }


class Triangle :public Shape
{
private:
	int a, b, c;
public:
	Triangle(int a, int b, int c);
	float area();
	void details();
};
Triangle::Triangle(int x, int y, int z) :Shape("Triangle")
{
	a = x;	b = y;	c = z;
}
float Triangle::area()
{
	int s = (a + b + c) / 2.0;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}
void Triangle::details()
{
	cout << a << '\t' << b << '\t' << c << '\t';
}


class Circle :public Shape
{
private:
	int radius;
	int center_x, center_y;
public:
	Circle(int r, int x, int y);
	float area();
	void details();
};
Circle::Circle(int r, int x, int y)
	:Shape("Circle")
{
	radius = r;
	center_x = x;
	center_y = y;
}
float Circle::area() { return 3.14 * radius * radius; }
void Circle::details() { cout << radius << "\t(" << center_x << ',' << center_y << ")\t"; }
