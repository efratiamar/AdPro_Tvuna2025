#include "Student.h"
//#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	//Student s1;
	//s1.setGrade(4);	
	//s1.setName("David Cohen");
	//cout << "Name is: " << s1.getName() << endl;


	//Student s2;
	//s2.setGrade(4);
	//s2.setName("Moshe");
	//s2.inputMarks();
	//s2.print();


	Student arr[10] ;

	for (int i = 0; i < 2; i++)
	{
		char n[21];
		cout << "Enter student's name (up to 20 chars): ";
		//cin.getline(n,20);
		cin >> n;
		arr[i].setName(n);
		
		int g;
		cout << "Enter student's grade (1-12): ";
		cin >> g;
		arr[i].setGrade(g);

		arr[i].inputMarks();

		arr[i].print();
	}
}