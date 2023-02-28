#include"read and sort.h"
#include<iostream>
#include<fstream>
#include<time.h>
using namespace std;
int main() {
	int a[100] = {0};
	input_nums(100);
	int cnt = read(a);
	sort(a, cnt);
	return 0;
}