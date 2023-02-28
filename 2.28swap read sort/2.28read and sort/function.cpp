#include"read and sort.h"
#include<iostream>
#include<fstream>
#include<time.h>
using namespace std;
void input_nums(int n) {    //input random numbers(1-1000)*n to file
	ofstream out;
	out.open("D:\\nums.txt");
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		out << rand()%1000<< endl;
	}
	out.close();
}
int read(int a[]) {       //读取文件中的数
	ifstream in("D:\\nums.txt");
	int cnt = 0;
	if (!in) {
		cout << "failed to open file" << endl;
		exit(1);
	}
	while (in >> a[cnt]) {   //将文件中的数写入数组
		cnt++;
		if (cnt > 100)break;
	}
	return cnt ;
}

void sort(int a[], int n) {
	int i, j,cnt=0;
	for (i = 0; i < n; i++) {        //bubble sort
		for (j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
		}
	}
	for (i = 0; i < n; i++) {      //输出排序后的数组，五个数一行
		cout << a[i] << "\t";
		cnt++;
		if (cnt % 5 == 0 && cnt != 0)cout << endl;
	}
}
void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}
