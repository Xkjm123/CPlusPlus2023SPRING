#pragma once
#define 李华 lh
#include<string>
#include<iostream>
using namespace std;
class student {
private:
	string num;
	string name;
	string sex;
	string classnum;
	string birthday;
public:
	student() {
		num = "0101";
		name = "李华";
		sex = "男";
		classnum = "01";
		birthday = "2020.1.1";
		cout<<"学生信息初始化为："<<endl << "班级编号：" << classnum << endl << "学号：" << num << endl << "姓名：" << name << endl << "性别:" << sex << endl << "学生生日" << birthday << endl<<endl;
	}
	student(string number , string n , string s , int cn , string birth ) {
		num = number;
		name = n;
		sex = s;
		classnum = cn;
		birthday = birth;
		cout << "学生信息初始化为：" << endl << "班级编号：" << classnum << endl << "学号：" << num << endl << "姓名：" << name << endl << "性别:" << sex << endl << "学生生日" << birthday << endl<<endl;
	}
	void show();
	void set_info(string cn,string number, string n, string s, string birth);
};