#include"point.h"
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	point p1(1, 1), p2(p1), p3(2, 2), p4(44, 44);
	rectangle r1(1, 1, 2, 2);
	cout<<"area is "<<r1.get_area() << endl;
	r1.judge_pos(p2);
	r1.judge_pos(p3);
	r1.judge_pos(p4);
	circle c1(1, 1, 3);
	cout << "area is " <<c1.get_area()<<endl;
	c1.judge_pos(p2);
	c1.judge_pos(p3);
	c1.judge_pos(p4);
	point p5(1, 4);
	c1.judge_pos(p5);
	r1.show();
	c1.show();
	return 0;
}