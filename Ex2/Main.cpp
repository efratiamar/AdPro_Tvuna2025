#include "Point.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main()
{
	Point p1; //0,0
	//cout <<  p1.getX(); //zevel
	p1.setX(6);
	p1.setY(-7.5);

	Point p2; //0,0
	p2.setX(6.9);
	p2.setY(7.65);

	cout << p2.getX();

	float d1 = p1.distance(p2);
	float d = p2.distance(p1);

	Point p3(3); //3,0
	Point p4(6, 8); //6,8

	
	Circle c1; //1,0,0
	c1.setRadius(6.8);	
	c1.setCenter(4.3, 78);

	Circle c2(4, 2, 6); // 4,2,6

	Circle c3(5, 6); //5,6,0

	Circle c5(c2); // 4,2,6

	//tar 3

	Circle arr[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "enter radius, x of center, y of center:" << endl;
		float r, x, y;
		cin >> r >> x >> y;

		Circle c(r, x, y);
		arr[i] = c;
	}



}