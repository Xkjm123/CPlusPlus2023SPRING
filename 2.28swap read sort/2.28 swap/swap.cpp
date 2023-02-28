#include"swap.h"
#include<iostream>
using namespace std;
void swap(int* x, int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void swap(int& x, int& y) {
	int tmp = x;
	x = y;
	y = tmp;
}
void swap(double* x, double* y) {
	double tmp = *x;
	*x = *y;
	*y = tmp;
}
void swap(double& x, double& y) {
	double tmp = x;
	x = y;
	y = tmp;
}void swap(string* x, string* y) {
	string tmp = *x;
	*x = *y;
	*y = tmp;
}
void swap(string& x, string& y) {
	string tmp = x;
	x = y;
	y = tmp;
}