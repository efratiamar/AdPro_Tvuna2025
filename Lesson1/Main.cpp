#include <iostream>
using namespace std;

#include "Rect.h"

int main()
{
	Rect r1;

	//r1.length = -4;
	//r1.width = 5;

	r1.setLength(4);
	r1.setWidth(5);

	r1.printArea();

	cout << "AA" << endl;	
}