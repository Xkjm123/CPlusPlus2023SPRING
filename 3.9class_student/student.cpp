#include"student.h"
#include<string>
#include<iostream>
using namespace std;
void student::show() {
	cout << "��ѧ��������ϢΪ��"<<endl<<"�༶��ţ�" << classnum << endl << "ѧ�ţ�" << num << endl << "������" << name << endl << "�Ա�:" << sex << endl << "ѧ������" << birthday << endl<<endl;
}
void student::set_info(string cn,string number , string n , string s , string birth ) {
	num = number;
	name = n;
	sex = s;
	classnum = cn;
	birthday = birth;
	cout<<"������ѧ����ϢΪ��"<<endl<< "�༶��ţ�" << classnum << endl << "ѧ�ţ�" << num << endl << "������" << name << endl << "�Ա�:" << sex << endl << "ѧ������" << birthday << endl<<endl;
}