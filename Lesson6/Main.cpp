#include <iostream>
using namespace std;
#include <fstream>
#include "Point.h"
#include "Circle.h"	// main.cpp

int main()
{
	Circle A;
	cout << "enter a circle (radius and center point )\n";
	cin >> A;
	cout << "perimeter :" << A.perimeter() << '\n';
	cout << "area :" << A.area() << '\n';
	int in = 0, on = 0, out = 0;
	cout << "enter points to stop enter (0, 0) :\n";
	Point p, zeroPoint;
	cin >> p;
	while (p != zeroPoint) {
		if (A.onInOut(p) < 0) 	     in++;
		else if (A.onInOut(p) == 0)    on++;
		else			     out++;
		cin >> p;
	}
	cout << "num of points " << endl;
	cout << "in A:" << in << '\t';
	cout << "on A:" << on << '\t';
	cout << "out of A:" << out << '\t';
	return 0;
}

int main3()
{
	ifstream file1;
	file1.open("points.txt");

	ofstream file2;
	file2.open("out.txt");

	if (!file1 || !file2)
	{
		cout << "failed opening file.\n";
		return -1;
	}

	while (!file1.eof())
	{
		Point p1;
		//cin >> p1;
		file1 >> p1;
		if (p1.getX() == 0)
		{
			//cout << p1;
			file2 << p1;
		}
	}
	
	file1.close();
	file2.close();

	return 0;
}
int main2()
{
	// option A
	ofstream f;
	f.open("points.txt");


	// option B
	//ofstream f("points.txt");

	// option C
	//fstream f;
	//f.open("points.txt",ios::out);

	if (!f)
	{
		cout << "failed opening file.\n";
		return -1;
	}

	for (int i = 0; i < 3; i++)
	{
		Point p(rand() % 100, rand() % 100);

		//cout << p << endl;

		f << p << endl;
	}

	f.close();

	return 0;

}