#include "MyString.h"
#include <iostream>
using namespace std;

MyString func()
{
	MyString t("ABC");
	//...
	return t;

    //return std::move(t);
}


int main()
{
	MyString ms1("abc def");
	MyString ms2;

	MyString ms3(ms1);

	MyString ms4 = func();

	if (ms1 == ms2)
	{

	}

	if (ms1 < ms2)
	{

	}

	ms2 = ms1 + ms4; //abc defABC

	ms2 = ms4 * 3; //ABCABCABC

	ms1 = ms2 = ms3;

	ms1 = func();

	cout << ms1; //"ssss"
	
	MyString ms;
	cin >> ms;

	cin >> ms2;


}

void mai2n()
{
	string s1;
	string s2 = "abc dhsgjlgjk%#";

	s1 = "dasf";
	s2 = s2 + s1;
	s2 += "sdvvsdbs";

	s1 = "abcdefg dgsgssgggfgssgsgsdg";
	cout << s1;
	cout << s1[2]; //c

	cout << s1.at(4); // s1[4] // e

	cout << s1.length();

	s1.replace(7, 8, "12345678"); //"abcdefg12345678gfgssgsgsdg"

	s1 = "DdD CASFF";
	int space = s1.find(" "); //3
	cout << s1.substr(0, space);//DdD



}