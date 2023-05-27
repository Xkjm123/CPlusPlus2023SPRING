#include"shape.h"
#include<iostream>
using namespace std;
void shape::show() {
	cout << "x=" << x << " y=" << y << endl;
}
void shape::translation(double a) {
	x += a;
}


double circle::get_area() {
	return PI * r * r;
}
void circle::show() {
	cout << "x=" << getx() << " y=" << gety() << " r=" << r << endl;
}
void circle::translation(double a) {
	revise_x(getx() + a);
}


double rectangle::get_area() {
	return width * length;
}
void rectangle::show() {
	cout << "x=" << getx() << " y=" << gety() << " width=" << width << " length=" << length << endl;
}
void rectangle::translation(double a) {
	revise_x(getx() + a);
}