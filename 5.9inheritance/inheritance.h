#pragma once
#include<string>
#include<iostream>
using namespace std;
class person {
protected:
	string name;
	string sex;
	int age;
public:
	person(string n = "zhangsan", string s = "male", int a = 18) :name(n), sex(s), age(a) {}
	friend ostream& operator<<(ostream& o, person& p) {
		return o << "name:" << p.name << " sex:" << p.sex << " age:" << p.age;
	};
	void set_age(int a) {
		age = a;
	};
};

class student :public person {
private:
	int no;
	int grade;
	string major;
public:
	student(string n = "zhangsan", string s = "male", int a = 18, int no = 19220230, int g = 1, string m = "english") :person(n, s, a), no(no), grade(g), major(m) {};
	friend ostream& operator<<(ostream& o, student s) {
		return o << "name:" << s.name << " sex:" << s.sex << " age:" << s.age << " no:" << s.no << " grade:" << s.grade << " major:" << s.major;
	}
	void set_grade(int g) {
		grade = g;
	};
};

class teacher :public person {
private:
	int workno;
	int seniority;
	int salary;
public:
	teacher(string n = "zhangsan", string s = "male", int a = 18, int wkno = 123456, int se = 1, int sa = 2500) :person(n, s, a), workno(wkno), seniority(se), salary(sa) {};
	friend ostream& operator<<(ostream& o, teacher t) {
		return o << "name:" << t.name << " sex:" << t.sex << " age:" << t.age << " worknumber:" << t.workno << " seniority:" << t.seniority << " salary:" << t.salary;
	}
	void set_seni(int s) {
		seniority = s;
	};
};
