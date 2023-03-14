#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
using namespace std;
class course {
private:
	int cnum;
	char* cname;
	int credit;
	string nature;
	int& cno;
public:
	course(int n, int c, string a) :cnum(n), credit(c), nature(a), cno(cnum) {
		cname = NULL;
	}
	course(int n, const char* name, int c, string a) :cnum(n), credit(c), nature(a), cno(cnum) {
		cname = new char[strlen(name) + 1];
		strcpy(cname, name);
	}
	course(const course& c) :cno(cnum) {
		cname = new char[strlen(c.cname) + 1];
		strcpy(cname, c.cname);
		cnum = c.cnum;
		credit = c.credit;
		nature = c.nature;
		cno = c.cno;
	}
	~course() {
		delete[] cname;
	}
	void show();
	void setinfo(int n, char* name, int c,string a);
};