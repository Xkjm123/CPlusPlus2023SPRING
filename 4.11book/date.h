#pragma once
class date {
private:
	int year;
	int month;
	int day;
public:
	date();
	date(int y=2015, int m=1, int d=1);
	void printdate();
	void setdate(int y, int m, int d);
	void goto_nextday();
	bool isleapyear();
	bool isbigmonth();
};
