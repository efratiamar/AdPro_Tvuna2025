#include <iostream>
using namespace std;

#include "Vector.h"

Vector create()
{
	Vector v; //ctor v
	//...
	return std::move(v); //move ctor v->v3
}//dtor v

int main()
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

}