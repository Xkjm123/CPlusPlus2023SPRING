#include<iostream>
#include"mydate.h"
using namespace std;
int main() {
	struct date today;
	cout << "���������:" << endl;
	cin >> today.year ;
	cout << "�������·�:" << endl;
	cin >> today.month;
	cout << "����������:" << endl;
	cin >> today.day;
	gettomorrow(today);
	return 0;
}