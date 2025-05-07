
#include "Rational.h"

int g(int x)
{
	cout << x;
	Rational r1;
	r1.mone = 5;
	return x;
}

int main()
{
	//g(5);

	Rational r1(4, 3);
	Rational r2(4, 3);

	Rational r3 = r1 * r2;
	r3 = 2 * r1;
	r3 = r1 * 7;

	cout << "vzvds";
	cout << 6;

	r3.print();

	r3 = r2 = r1;

	cout << r3;
	cout << r3 << " gggg " << r1;
	
	int x, y;
	cin >> x >> y;

	cin >> r3;


}



class Rect
{
	int width;
	int length;
public:
	Rect() {};
	Rect(int wid, int len) : width(wid), length(len) {};

	Rect operator+(const Rect& rB) const
	{
		Rect t (width + rB.width, length + rB.length);
		return t;
	};

	bool operator==(const Rect& rB) const
	{
		return (length == rB.length && width == rB.width);
	}

	bool operator!=(const Rect& rB) const
	{
		//return !(length == rB.length && width == rB.width);
		return  !(rB == *this);
	}
};




void main2()
{

	int a = 4, b = 8, c = 9;
	a = b + c;

	Rect r1, r2, r3;
	
	//Rect* pR;
	//pR = new Rect(3, 5);
	//pR->operator+

	r1 = r2 + r3;

	r1 = r2.operator+(r3);

	r2 = r1; //ok!

	if (r2 == r1) { /*...*/ };

	if (r2 != r1) { /*...*/ };



	//..
	//r1 += (r2 + r3); //compilation error
}
