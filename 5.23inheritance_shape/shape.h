#pragma once
#define PI 3.14
#include<iostream>
using namespace std;
class shape {
private:
	double x, y;
public:
	shape() { x = 0; y = 0; }
	shape(double a, double b) {
		x = a;
		y = b;
	}
	void revise_x(double a) { x = a; }
	double getx() { return x; }
	double gety() { return y; }
	virtual double get_area() { return 0; };
	virtual void show();
	virtual void translation(double);
};

class circle :public shape {
private:
	double r;
public:
	circle(double a, double b, double ra) :shape(a, b) {
		r = ra;
	}
	void show();
	double get_area();
	void translation(double);
};

class rectangle :public shape {
private:
	double width, length;
public:
	rectangle(double a, double b, double w = 0, double l = 0) :shape(a, b) {
		width = w;
		length = l;
	}
	shape& get_upper_right() {
		shape p((getx() + length), (gety() + width));
		return p;
	}
	double get_area();
	void show();
	void translation(double);
}; 
