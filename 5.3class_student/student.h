#pragma once
#include<string>
using namespace std;
class student {
private:
	int no;
	string name;
	string sex;
	string birth_place;
	string major;
public:
	int get_no();
	string get_name();
	string get_sex();
	string get_major();
	void show();
	void set_info(int,string,string,string,string);
};