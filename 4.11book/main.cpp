#include"cbook.h"
#include"date.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main() {
	date d;
	cbook book1(d,"book","author","press",12.9);
	cin >> book1;
	cout << "book1:" << endl << book1 << endl;
	book1.setnum(12);
	book1 = book1 + 12;
	cout << "book1:" << endl << book1 << endl;
	return 0;
}