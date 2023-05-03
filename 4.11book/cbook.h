#pragma once
#include"date.h"
#include<string>
using namespace std;
class cbook {
private:
	string bookname;
	string authorname;
	string pressname;
	float price;
	date pub_day;
	int num;
public:
	cbook(date d, string bn = "BookName", string an = "AuthorName", string pn = "PressName", float p = 0.0) {
		bookname = bn;
		authorname = an;
		pressname = pn;
		price = p;
		pub_day = d;
		num = 1;
	}
	friend ostream& operator<<(ostream& out, cbook& a) {
		out << a.bookname  << a.authorname  << a.pressname  ;
		return out;
	}
	friend istream& operator>>(istream& in, cbook& a) {
		in >> a.bookname >> a.authorname >> a.pressname ;
		return in;
	}
	void setnum(int n) {
		num = n;
	}
	friend cbook operator+(cbook a, int n) {
		a.price += n;
		return a;
	}
	void setprice(float n) {
		price = n;
	}
	void printprice() {
		cout << "price= " << price << endl;
	}
};