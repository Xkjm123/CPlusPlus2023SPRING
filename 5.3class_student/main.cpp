#include"student.h"
#include<vector>
#include<string>
#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;
bool compare_no(student& st1, student& st2) {
	return st1.get_no() < st2.get_no();
}
bool match_major(student& st, string ma) {
	return st.get_major() == ma;
}
void show(student& st) {
	st.show();
}
int main() {
	vector<student>students;
	ifstream fin("info.txt", ios::in);
	while (!fin.eof()) {
		ifstream ifs("info.txt", ios::in);
		int n;
		string na, se, bp, ma;
		ifs >> n >> na >> se >> bp >>ma;
		student st;
		st.set_info(n, na, se, bp, ma);
		students.push_back(st);
	}
	sort(students.begin(), students.end(), compare_no);
	for_each(students.begin(), students.end(), show);
	cout << count_if(students.begin(), students.end(), match_major);
	return 0;
}