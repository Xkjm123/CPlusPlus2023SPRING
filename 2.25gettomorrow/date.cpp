#include<iostream>
#include"mydate.h"
using namespace std;
void gettomorrow(struct date a) {
	if (a.year % 400 == 0||(a.year%4==0&&a.year%100!=0)) {
		if (a.month == 2) {
			if (a.day == 29) {
				a.month += 1; a.day = 1; goto stop;
			}
			else {
				a.day += 1;  goto stop;
			}
		}
	}
	else {
		if (a.month == 2) {
			if (a.day == 28) {
				a.month += 1; a.day = 1; goto stop;
			}
			else {
				a.day += 1;  goto stop;
			}
		}
	}
	if (a.month == 1 || a.month == 3 || a.month == 5 || a.month == 7 || a.month == 8 || a.month == 10 || a.month == 12) {
		if (a.day == 31) {
			a.month += 1; a.day = 1;
		}
		else {
			a.day += 1;
		}
	}
	else if (a.month == 4 || a.month == 6 || a.month == 9 || a.month == 11) {
		if (a.day == 30) {
			a.month += 1; a.day = 1;
		}
		else {
			a.day += 1;
		}
	}
	if (a.month == 13) {
		a.year++;
		a.month = 1;
	}
stop:
	cout <<"下一天为："<< a.year << "." << a.month << "." << a.day << endl;
}