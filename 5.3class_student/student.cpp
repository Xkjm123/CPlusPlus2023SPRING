#include"student.h"
#include<string>
#include<iostream>
using namespace std;
int student::get_no() {
	return no;
}
string student::get_name() {
	return name;
}
string student::get_sex() {
	return sex;
}
string student::get_major() {
	return major;
}
void student::show() {
	cout << "name:" << get_name() << endl << "sex:" << get_sex() << endl << "student number:" << get_no() << endl;
}
void student::set_info(int n, string na, string se, string bp, string ma) {
	no = n;
	name = na;
	sex = se;
	birth_place = bp;
	major = ma;
}
