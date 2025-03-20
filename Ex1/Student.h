#pragma once

class Student
{
	char name[21];
	int grade;
	float marks[10];
	float avg();
public:
	char* getName();
	int getGrade();
	void setName(const char* n);
	void setGrade(int g);

	void inputMarks();
	void print();

};
