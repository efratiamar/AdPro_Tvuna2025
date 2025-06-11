#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
	vector<int> v1;

	v1.push_back(33);
	v1.push_back(44); //33, 34
	cout << v1.size(); //2
	cout << v1.capacity(); //??

	v1.pop_back(); //33

	v1[1] = 24;

	for (int i = 0; i < v1.size(); i++)
		cout << v1[i];

	vector<int>::iterator itVI;
	for (itVI = v1.begin(); itVI != v1.end(); itVI++)
		cout << *itVI << " ";


	cout << v1.front(); //v1[0]
	cout << v1.back(); //v1[v1.size()-1]

	vector<char> v2(4); // 0,0,0,0
	cout << v2.size(); //4

	vector<float> v3(6, 3.2); //3.2, 3.2, 3.2, 3.2,3.2, 3.2
	cout << v3.size(); //6


	list<int> ls1;

	ls1.push_back(4);
	ls1.push_back(6); //4, 6
	ls1.push_front(7); //7, 4, 6

	ls1.pop_back();
	ls1.pop_front();
	cout << ls1.front();
	cout << ls1.back();

	list<int>::iterator itL1; //int* p

	for (itL1 = ls1.begin(); itL1 != ls1.end(); itL1++)
		cout << *itL1 << " ";


	list<char> ls2;

	ls2.push_back('A');
	//...

	list<char>::iterator itC;

	for (itC = ls2.begin(); itC != ls2.end(); itC++)
		cout << *itC << " ";

	list<char> ls3;

	for (itC = ls3.begin(); itC != ls3.end(); itC++)
		cout << *itC << " ";


	




}