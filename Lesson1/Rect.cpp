#include <iostream>
using namespace std; 
#include "Rect.h"

void Rect::printArea()
{
	cout << "Area: " << length * width << endl;
}

void Rect::setLength(int l)
{
	if (l < 0)
	{
		cout << "Invalid length" << endl;
		length = 1;
	}
	else
		length = l;
}

void Rect::setWidth(int w)
{
	if (w < 0)
	{
		cout << "Invalid width" << endl;
		width = 1;
	}
	else
		width = w;
}

int Rect::getLength()
{
	return length;
}

int Rect::getWidth()
{
	return width;
}