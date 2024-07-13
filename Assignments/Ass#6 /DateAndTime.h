#pragma once
#ifndef DATEANDTIME_H_
#define DATEANDTIME_H_

#include <iostream>
using namespace std;

class DateAndTime {
	int day;
	int month;
	int year;
	int second;
	int minute;
	int hour;
	char meridiem;
public:
	//default constructor
	DateAndTime()
	{
		day = 0;
		month = 0;
		year = 0;
		second = 0;
		minute = 0;
		hour = 0;
		meridiem = '\0';
	}

	//paramatrized constructor
	DateAndTime(int d, int m, int y, int sec, int min, int hr, char mer)
	{
		day = d;
		month = m;
		year = y;
		second = sec;
		minute = min;
		hour = hr;
		meridiem = mer;
	}

	//copy constructor
	DateAndTime(DateAndTime& DaT)
	{
		day = DaT.day;
		month = DaT.month;
		year = DaT.year;
		second = DaT.second;
		minute = DaT.minute;
		hour = DaT.hour;
		meridiem = DaT.meridiem;
	}
	//getters
	int getSec()
	{
		return second;
	}
	int getMin()
	{
		return minute;
	}
	int getHour()
	{
		return hour;
	}
	int getMeridiem()
	{
		return meridiem;
	}
	int getDay()
	{
		return day;
	}
	int getMonth()
	{
		return month;
	}
	int getYear()
	{
		return year;
	}

	//function to display date and time
	void displayDateAndTime()
	{
		cout << "\nDate:\t\t Time:\n";
		cout << day << " / " << month << " / " << year << "\t" << hour << " : " << minute << " : " << second << " " << meridiem;
		if (meridiem == 'a')
			cout << "m";
		else
			cout << "m";
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

	//yeh seconds ko barhata jaata hai, so we know when minute and hour also increments
	void tick()
	{
		second = (second + 1) % 60;
		if (second == 0) {
			minute = (minute + 1) % 60;
			if (minute == 0) {
				hour = (hour % 12) + 1;
				if (hour == 12) {
					if (meridiem == 'p') {
						meridiem = 'a';
						nextDay();
					}
					else
						meridiem = 'p';
				}
			}
		}
	}

	~DateAndTime()
	{
		displayDateAndTime();
		cout << "\nDestructor called.";
	}

};

#endif // !DATEANDTIME_H
