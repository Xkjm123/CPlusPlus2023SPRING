#include"date.h"
#include<iostream>
using namespace std;
int main() {
	date d;
	d.printdate();  //��ʼ������Ϊ2000.1.1
	d.setdate(2024, 2, 29);   //����2��
	d.goto_nextday();
	d.setdate(2023, 2, 28);   //������
	d.goto_nextday();
	d.setdate(2024, 5, 31);   //����
	d.goto_nextday();
	d.setdate(2024, 6, 30);   //С��
	d.goto_nextday();
	return 0;
}