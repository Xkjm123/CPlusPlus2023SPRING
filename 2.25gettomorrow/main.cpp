#include<iostream>
#include"mydate.h"
using namespace std;
int main() {
	struct date today;
	cout << "请输入年份:" << endl;
	cin >> today.year ;
	cout << "请输入月份:" << endl;
	cin >> today.month;
	cout << "请输入日期:" << endl;
	cin >> today.day;
	gettomorrow(today);
	return 0;
}