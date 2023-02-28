#include"swap.h"
#include<iostream>
using namespace std;
int main() {
	int a1 = 1, a2 = 2;
	double d1 = 1.414, d2 = 1.732;
	string s1 = "abc", s2 = "ABC";
	//int����
	cout << "before swapping: a1=" << a1 << "   a2=" << a2 << endl;
	swap(a1, a2);
	cout << "after swapping with ptr: a1=" << a1 << "  a2=" << a2 << endl;
	swap(&a1, &a2);
	cout << "after swapping with &: a1=" << a1 << "  a2=" << a2 << endl;
	//double����
	cout << "before swapping: d1=" << d1 << "   d2=" << d2 << endl;
	swap(d1, d2);
	cout << "after swapping with ptr: d1=" << d1 << "  d2=" << d2 << endl;
	swap(&d1, &d2);
	cout << "after swapping with &: d1=" << d1 << "  d2=" << d2 << endl;
	//string����
	cout << "before swapping: s1=" << s1 << "   s2=" << s2 << endl;
	swap(s1, s2);
	cout << "after swapping with ptr: s1=" << s1 << "  s2=" << s2 << endl;
	swap(&s1, &s2);
	cout << "after swapping with &: s1=" << s1 << "  s2=" << s2 << endl;
	return 0;
}