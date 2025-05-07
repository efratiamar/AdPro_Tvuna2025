#include <iostream>
using namespace std;

#include "Vector.h"

#include <fstream>

Vector create()
{
	Vector v; //ctor v
	//...
	return std::move(v); //move ctor v->v3
}//dtor v

int main()
{
	string fileName;
	cout << "Enter file name: ";
	cin >> fileName; //Numbers.txt

	ifstream fileR;
	fileR.open(fileName);

	if (!fileR)
	{
		cout << "Error while reading from " << fileName << " file" << endl;
		return -1;
	}

	Vector v(100);
	int i = 0;
	while (!fileR.eof() && i++ < 100)
	{
		int num;
		fileR >> num;
		v.addLast(num);
	}

	v.sort();

	fileR.close();

	ofstream fileW;
	fileW.open(fileName);

	if (!fileW)
	{
		cout << "Error while writing to " << fileName << " file" << endl;
		return -1;
	}

	fileW << v;
	fileW.close();




}

void main2()
{
	Vector v0(34);
	//...

	Vector v2(v0); //copy ctor
	//v1

	Vector v3 = create(); //move ctor v->v3
	
	Vector v1(34);
	for (int i = 0; i < 15; i++)
	{
		v1.addLast(rand() % 100);
		v1.print();
	}

	while (!v1.isEmpty())
	{
		cout << v1.lastValue() << endl;
		v1.removeLast();
		v1.print();
	}


	Vector v4(10);
	v4.addLast(7);
	v4.addLast(57);
	v4.addLast(75);
	v4.addLast(37);

	cout << v4;



}