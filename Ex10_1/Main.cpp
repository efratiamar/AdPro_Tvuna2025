#include "Shape.h"
//#include "Square.h"
//#include "Triangle.h"
//#include "Circle.h"

#include <vector>

int mainVector()
{
	vector<Shape*> vec;
	//Shape* vec[10];

	for (int i = 0; i < 10; i++)
	{
		int x = rand() % 3;
		switch (x)
		{
		case 0:
			vec[i] = new Square(rand() % 10 + 1);
			break;
		case 1:
			vec[i] = new Triangle(rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1);
			break;
		case 2:
			vec[i] = new Circle(rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1);
			break;
		}
	}

	for (int i = 0; i < 10; i++)
		vec[i]->print();

	for (int i = 0; i < 10; i++)
	{
		if (vec[i])
			delete vec[i];
	}
}
