#pragma once
#include<iostream>
using namespace std;
typedef int itemtype;
class node;
typedef node* ptrtype;
class list
{
private:
	ptrtype head;
	int size;
	ptrtype pointto(int pos) const;
public:
	list() {
		size = 0;
		head = NULL;
	}
	list(const list& l);
	~list();
	bool isEmpty() const;
	int ListLength()const;
	void insert(int pos, itemtype newitem, bool& success);
	void remove(int pos, bool& success);
	void retrieve(int pos, itemtype& item, bool& success)const;

};
