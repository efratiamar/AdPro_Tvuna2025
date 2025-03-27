#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include <cstring>
#include <iostream>
using namespace std;

float Student::avg()
{
    float sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += marks[i];
    }
    return sum / 10;
}

void Student::print()
{
    cout << "Name: " << name << " Grade: " << grade	<< " Average : " << avg() << endl;
}

char* Student::getName()
{
    return name;
}

int Student::getGrade()
{
    return grade;
}

void Student::setName(const char* n)
{
    if (strlen(n) > 20)
        strcpy(name, "");
    else
        strcpy(name, n);
}

void Student::setGrade(int g)
{
    if (g < 1 || g > 12)
        grade = 1;
    else
        grade = g;
}

void Student::inputMarks()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the " << i + 1 << "'s mark (0-100): ";
        cin >> marks[i];

        if (marks[i] < 0 || marks[i] > 100)
        {
            cout << "Error mark! need 0-100!" << endl;
            i--;
        }
    }
}

