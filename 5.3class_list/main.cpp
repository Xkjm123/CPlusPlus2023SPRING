
#include <iostream>
#include "list.h"
using namespace std;
int main()
{
	list list1;
	bool success;
	itemtype item;
	list1.insert(1, 10, success);
	list1.insert(2, 20, success);
	list1.insert(3, 30, success);
	list1.insert(4, 40, success);
	for (int i = 1; i <= list1.ListLength(); i++)
	{
		list1.retrieve(i, item, success);
		cout << "pos:" << i << ", item:" << item << " ;";
	}
	cout << endl;
	cout << "****remove position 3" << endl;
	list1.remove(3, success);
	for (int i = 1; i <= list1.ListLength(); i++)
	{
		list1.retrieve(i, item, success);
		cout << "pos:" << i << ", item:" << item << " ;";
	}
	cout << endl;
	cout << "****remove position 2" << endl;
	list1.remove(2, success);

	for (int i = 1; i <= list1.ListLength(); i++)
	{
		list1.retrieve(i, item, success);
		cout << "pos:" << i << ", item:" << item << " ;";
	}

	cout << endl << "list2£º" << endl;
	list new_list(list1);
	for (int i = 1; i <= new_list.ListLength(); i++)
	{
		new_list.retrieve(i, item, success);
		cout << "pos:" << i << ", item:" << item << " ;";
	}
	cout << endl;
}

