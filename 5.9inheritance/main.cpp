#include"inheritance.h"
#include<iostream>
#include<string>
using namespace std;
int main() {
	person lihua("Lihua", "male", 98);
	cout << lihua << endl;
	lihua.set_age(23);
	cout << lihua << endl;
	student zhangsan("Zhangsan", "male", 18, 15230515, 1, "math");
	cout << zhangsan << endl;
	zhangsan.set_age(23);
	zhangsan.set_grade(3);
	cout << zhangsan << endl;
	teacher lisi("Lisi", "male", 30, 123654, 8, 9500);
	cout << lisi << endl;
	lisi.set_age(67);
	lisi.set_seni(45);
	cout << lisi << endl;
	return 0;
}