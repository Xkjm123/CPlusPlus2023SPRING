#pragma once
#define � lh
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
		name = "�";
		sex = "��";
		classnum = "01";
		birthday = "2020.1.1";
		cout<<"ѧ����Ϣ��ʼ��Ϊ��"<<endl << "�༶��ţ�" << classnum << endl << "ѧ�ţ�" << num << endl << "������" << name << endl << "�Ա�:" << sex << endl << "ѧ������" << birthday << endl<<endl;
	}
	student(string number , string n , string s , int cn , string birth ) {
		num = number;
		name = n;
		sex = s;
		classnum = cn;
		birthday = birth;
		cout << "ѧ����Ϣ��ʼ��Ϊ��" << endl << "�༶��ţ�" << classnum << endl << "ѧ�ţ�" << num << endl << "������" << name << endl << "�Ա�:" << sex << endl << "ѧ������" << birthday << endl<<endl;
	}
	void show();
	void set_info(string cn,string number, string n, string s, string birth);
};