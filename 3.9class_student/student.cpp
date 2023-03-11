#include"student.h"
#include<string>
#include<iostream>
using namespace std;
void student::show() {
	cout << "该学生基本信息为："<<endl<<"班级编号：" << classnum << endl << "学号：" << num << endl << "姓名：" << name << endl << "性别:" << sex << endl << "学生生日" << birthday << endl<<endl;
}
void student::set_info(string cn,string number , string n , string s , string birth ) {
	num = number;
	name = n;
	sex = s;
	classnum = cn;
	birthday = birth;
	cout<<"已设置学生信息为："<<endl<< "班级编号：" << classnum << endl << "学号：" << num << endl << "姓名：" << name << endl << "性别:" << sex << endl << "学生生日" << birthday << endl<<endl;
}