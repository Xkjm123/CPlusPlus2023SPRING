#include"course.h"
#include<iostream>
; using namespace std;
void course::show() {
	cout << "�γ̱�ţ�" << cnum << endl << "�γ����ƣ�" << cname << endl << "ѧ�֣�" << credit << endl<<"�γ����ʣ�"<<nature<<endl<<"CNO��"<<cno<<endl;
}
void course::setinfo(int n, char* name, int c,string a) {
	cnum = n;
	cname = name;
	credit = c;
	nature = a;
	cno = cnum;
}