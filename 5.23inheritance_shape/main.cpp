#include"shape.h"
#include<iostream>
using namespace std;
int main() {
	shape* s[3];
	shape a(2, 2); circle b(2, 2, 1); rectangle c(2, 2, 1, 1);
	s[0] = &a;
	s[1] = &b;
	s[2] = &c;
	double area = 100;
	for (int i = 0; i < 3; i++) {
		s[i]->show();
		area = s[i]->get_area();
		cout << "area=" << area << endl;
	}
	return 0;
}