#include"date.h"
#include<iostream>
using namespace std;
date::date() {
	year = 2000;
	month = 1;
	day = 1;
}
date::date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}
void date::printdate() {
	cout << "��ǰ����Ϊ��" << year << "��" << month << "��" << day << "��" << endl;
}
void date::setdate(int y, int m, int d) {   //�ֶ���������
	year = y;
	month = m;
	day = d;
	cout << "����������Ϊ��" << year << "��" << month << "��" << day << "��" << endl;
}
bool date::isleapyear() {
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) return 1;
	return 0;
}
bool date::isbigmonth() {
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)return 1;
	return 0;
}
void date::goto_nextday() {
	if (date::isleapyear()) {
		if (month == 2) {
			if (day == 29) {
				month += 1; day = 1; goto stop;
			}
			else {
				day += 1;  goto stop;
			}
		}
	}
	else {
		if (month == 2) {
			if (day == 28) {
				month += 1; day = 1; goto stop;
			}
			else {
				day += 1;  goto stop;
			}
		}
	}
	if (date::isbigmonth()) {
		if (day == 31) {
			month += 1; day = 1;
		}
		else {
			day += 1;
		}
	}
	else if (!date::isbigmonth()) {
		if (day == 30) {
			month += 1; day = 1;
		}
		else {
			day += 1;
		}
	}
	if (month == 13) {
		year++;
		month = 1;
	}
stop:
	cout << "���޸�����Ϊ��" << year << "��" << month << "��" << day << "��" << endl;

}
