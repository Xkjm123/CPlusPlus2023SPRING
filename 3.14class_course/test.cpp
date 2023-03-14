#include"course.h"
#include<string>
#include<iostream>
; using namespace std;
int main() {
	course c1(1,"English", 2,"¹«¹²±ØÐÞ");
	c1.show();
	course c2(c1);
	c2.show();
	return 0;
}
