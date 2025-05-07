#define _CRT_SECURE_NO_WARNINGS
#include "MyString.h"
#include <cstring>
#include <iostream>
using namespace std;

MyString::MyString(const char* s)
{
	if (s)
	{
		len = strlen(s);
		str = new char[len + 1];
		strcpy(str, s);
	}
	else
	{
		len = 0;
		str = nullptr;
	}
}

MyString::MyString(const MyString& ms)
{
	len = ms.len;

	if (ms.str)
	{
		str = new char[len + 1];
		strcpy(str, ms.str);
	}
	else
		str = nullptr;
}

MyString::MyString(MyString&& ms)
{
	len = ms.len;
	if (ms.str)
	{
		str = ms.str;
		ms.str = nullptr; //!!!!
	}
	else
		str = nullptr;
}
MyString::~MyString()
{
	if (str) //!!!!
		delete[] str;
}

void MyString::print() const
{
	for (int i = 0; i < len ; i++)
		cout << str[i];
	cout << endl;
}

MyString& MyString::operator=(const MyString& ms)
{
	len = ms.len;

	if (str)
		delete[] str;

	if (ms.str)
	{
		str = new char[len + 1];
		strcpy(str, ms.str);
	}
	else
		str = nullptr;

	return *this;
}

MyString& MyString::operator=( MyString&& ms)
{
	len = ms.len;

	if (str)
		delete[] str;

	if (ms.str)
	{
		str = ms.str;
		ms.str = nullptr;
	}
	else
		str = nullptr;

	return *this;
}

bool MyString::operator==(const MyString& ms) const
{
	return (strcmp(str, ms.str) == 0);
}

bool MyString::operator!=(const MyString& ms) const
{
	//return !(strcmp(str, ms.str) == 0);

	return !(*this == ms);
}

bool MyString::operator<(const MyString& ms) const
{
	return (strcmp(str, ms.str) < 0);
}

bool MyString::operator>(const MyString& ms) const
{
	return (strcmp(str, ms.str) > 0);
}

bool MyString::operator<=(const MyString& ms) const
{
	return (strcmp(str, ms.str) <= 0);
}

bool MyString::operator>=(const MyString& ms) const
{
	return (strcmp(str, ms.str) >= 0);
}

MyString MyString::operator+(const MyString& ms) const
{
	//str + ms.str
	char* s = new char[len + ms.len + 1];
	strcpy(s, str);
	strcat(s, ms.str);


	MyString t(s);
	if (s)
		delete[] s;
	return t;
}

MyString MyString::operator*(int n) const
{
	char* s = new char[len*n + 1];
	strcpy(s, str);
	for (int i = 1; i < n; i++)
		strcat(s, str);

	MyString t(s);
	if (s)
		delete[] s;
	return t;
}

ostream& operator<<(ostream& os, const MyString& ms)
{
	for (int i = 0; i < ms.len; i++)
		os << ms.str[i];
	return os;
}

istream& operator>>(istream& is, MyString& ms)
{
	//option 2
	string s;
	is >> s;
	MyString t(s.c_str());
	ms = t;
	return is;

	//option 1
	//char s[100];
	//is >> s;
	//MyString t(s);
	//ms = t;
	//return is;
}
