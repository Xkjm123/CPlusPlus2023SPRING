#include"date.h"
#include<iostream>
using namespace std;
int main() {
	date d;
	d.printdate();  //初始化日期为2000.1.1
	d.setdate(2024, 2, 29);   //闰年2月
	d.goto_nextday();
	d.setdate(2023, 2, 28);   //非闰年
	d.goto_nextday();
	d.setdate(2024, 5, 31);   //大月
	d.goto_nextday();
	d.setdate(2024, 6, 30);   //小月
	d.goto_nextday();
	return 0;
}