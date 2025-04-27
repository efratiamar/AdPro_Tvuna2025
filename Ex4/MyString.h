#pragma once

class MyString
{
	int len;
	char* str;
public:
	MyString(const char* s = nullptr); //ctor
	MyString(const MyString& ms); //copy ctor
	MyString(MyString&& ms); //move ctor
	~MyString();

	char* getString() const	{ return str;}
	int length() const { return len; }
	void print() const;

	MyString& operator=(const MyString& ms);
	MyString& operator=(MyString&& ms);

	bool operator==(const MyString& ms) const;
	bool operator!=(const MyString& ms) const;
	bool operator<(const MyString& ms) const;
	bool operator<=(const MyString& ms) const;
	bool operator>(const MyString& ms) const;
	bool operator>=(const MyString& ms) const;

	MyString operator+(const MyString& ms) const;
	MyString operator*(int n) const;




};
