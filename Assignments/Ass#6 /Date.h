#pragma once
#ifndef DATE_H_
#define DATE_H_

#include <iostream>
using namespace std;

class Date {
	int month;
	int day;
	int year;
public:
	//default constructor
	Date() {
		day = 0;
		month = 0;
		year = 0;
	}
	//parameterized constructor
	Date(int d, int m, int y) {
		day = d;
		month = m;
		year = y;
	}
	//copy constructor
	Date(Date& d) {
		day = d.day;
		month = d.month;
		year = d.year;
	}

	//setters
	void setDay(int d) {
		if (day > 0 && day <= 31)
			day = d;
	}
	void setMonth(int m) {
		if (m > 0 && m <= 12)
			month = m;
		else
			month = 1;
	}
	void setYear(int y) {
		year = y;
	}

	//getters
	int getDay() {
		return day;
	}
	int getMonth() {
		return month;
	}
	int getYear() {
		return year;
	}

	//function to get the following day
	void nextDay()
	{
		day += 1;
		//january
		if (month == 1 && day > 31) {
			month = 2;
			day = 1;
		}
		//february
		else if (month == 2 && day > 29) {
			month = 3;
			day = 1;
		}
		//march
		else if (month == 3 && day > 31) {
			month = 4;
			day = 1;
		}
		//april
		else if (month == 4 && day > 30) {
			month = 5;
			day = 1;
		}
		//may
		else if (month == 5 && day > 31) {
			month = 6;
			day = 1;
		}
		//june
		else if (month == 6 && day > 30) {
			month = 7;
			day = 1;
		}
		//july
		else if (month == 7 && day > 31) {
			month = 8;
			day = 1;
		}
		//august
		else if (month == 8 && day > 31) {
			month = 9;
			day = 1;
		}
		//september
		else if (month == 9 && day > 30) {
			month = 10;
			day = 1;
		}
		//october
		else if (month == 10 && day > 31) {
			month = 11;
			day = 1;
		}
		//november
		else if (month == 11 && day > 30) {
			month = 12;
			day = 1;
		}
		//december
		else if (month == 12 && day > 31) {
			month = 1;
			day = 1;
			year += 1;
		}
	}

	//destructor
	~Date() {
		cout << "Destructor called.";
	}
};
#endif // DATE_H_
