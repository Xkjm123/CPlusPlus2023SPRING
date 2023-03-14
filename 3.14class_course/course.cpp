#include"course.h"
#include<iostream>
; using namespace std;
void course::show() {
	cout << "课程编号：" << cnum << endl << "课程名称：" << cname << endl << "学分：" << credit << endl<<"课程性质："<<nature<<endl<<"CNO："<<cno<<endl;
}
void course::setinfo(int n, char* name, int c,string a) {
	cnum = n;
	cname = name;
	credit = c;
	nature = a;
	cno = cnum;
}