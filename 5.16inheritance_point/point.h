#pragma once
#define PI 3.14
#include<iostream>
#include<cmath>
using namespace std;
class point {
protected:
	double x, y;
public:
	point() {
		x = 0;
		y = 0;
	}
	point(double a, double b) {
		x = a;
		y = b;
	}
	double getx() { return x; }
	double gety() { return y; }
	void show() {
		cout << "x=" << x << " y=" << y << endl;
	}
};

class rectangle :public point {
protected:
	double width, length;
public:
	rectangle(double a, double b, double w = 0, double l = 0) :point(a, b) {
		width = w;
		length = l;
	}
	double get_area() {
		return width * length;
	}
	point get_upper_right() {
		point p((getx() + length), (gety() + width));
		return p;
	}
	void show() {
		cout << "x=" << getx() << " y=" << gety() << " width=" << width << " length=" << length << endl;
	}
	void judge_pos(point& p) {
		p.show();
		point ur = get_upper_right();
		if(p.getx() < x || p.getx() > ur.getx())cout << "point is outside." << endl;
		else if (p.getx() == x || p.getx() == ur.getx()) {
			if (p.gety() >= y && p.gety() <= ur.gety())cout << "point is on the rectangle." << endl;
			else cout << "point is outside." << endl;
		}
		else{
			if (p.gety() > y && p.gety() < ur.gety())cout << "point is inside." << endl;
			else if (p.gety() ==y || p.gety() == ur.gety())cout << "point is on the rectangle." << endl;
			else cout << "point is outside." << endl;
		}
	}
};

class circle :public point {
protected:
	double r;
public:
	circle(double a, double b, double ra = 0) :point(a, b) {
		r = ra;
	}
	double get_area() {
		return PI * r * r;
	}
	void show() {
		cout << "x=" << getx() << " y=" << gety() << " r=" << r << endl;
	}
	void judge_pos(point& p) {
		p.show();
		double d = (p.getx() - x) * (p.getx() - x) + (p.gety() - y) * (p.gety() - y);
		double m = d - r * r;
		if (fabs(m) < 1E-6)cout << "point is on the circle" << endl;
		else if (d < r * r)cout << "point is inside." << endl;
		else cout << "point is outside" << endl;
	}
};