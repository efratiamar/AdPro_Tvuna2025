#pragma once

class List
{
	class Link
	{
	public:
		int key;
		Link* next;
		Link(int k, Link* n);
	};

	Link* head;
public:
	List();
	List(const List& ls);
	~List();

	bool isEmpty();
	void addFirst(int val);
	void removeFirst();
	int firstElement();
	bool search(const int& value);
	void clear();


};
