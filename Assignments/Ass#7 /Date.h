#ifndef DATE_H_
#define DATE_H_
//#include <string>
#include <iostream>
using namespace std;

class Date
{
    // Think about private data members
    int day;
    int month;
    int year;
public:
    //default constructor
    Date() {
        day = 0;
        month = 0;
        year = 0;
    }
    //parameterised constructor
    Date(int y, int m, int d) {
        year = y;
        month = m;
        day = d;
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
    //assigning obj of class DATE to another
    Date operator=(Date d) {
        this->year = d.year;
        this->month = d.month;
        this->day = d.day;
        return *this;
    }
    //adding integer with object of class DATE
    Date operator+(int m) {
        //Date temp;
        //temp.day = this->day + m;
        //return temp;
        this->day += m;
        if (this->day > 31) {
            month++;
            int x = 31 - this->day;
            this->day = 0;
            this->day += x;
        }
        return *this;
    }
    //subtracting int with object of class DATE
    Date operator-(int m) {
       // Date temp;
        //temp.day = this->day - m;
        //return temp
        this->day -= m;
        if (this->day < 0) {
            month--;
            int x = 0 + this->day;
            this->day += x;
        }
        return *this;
    }
    //adding two objects of class DATE
    Date operator+(Date d) {
        Date temp;
        temp.year = this->year + d.year;
        temp.month = this->month + d.month;
        temp.day = this->day + d.day;
        return temp;
    }
    //subtracting two objects of class DATE
    Date operator-(Date d) {
        Date temp;
        temp.year = this->year - d.year;
        temp.month = this->month - d.month;
        temp.day = this->day - d.day;
        return temp;
    }
    //function to see if objects greater
    bool operator>(Date d) {
        if (this->year > d.year)
            return true;
        else if (this->month > d.month)
            return true;
        else if (this->day > d.day)
            return true;
        else
            return false;
    }
    //function to see which objects greater or equal to
    bool operator>=(Date d) {
        if (this->year >= d.year)
            return true;
        else if (this->month >= d.month)
            return true;
        else if (this->day >= d.day)
            return true;
        else
            return false;
    }
    //function to see which objects less or equal than 
    bool operator<=(Date d) {
        if (this->year <= d.year)
            return true;
        else if (this->month <= d.month)
            return true;
        else if (this->day <= d.day)
            return true;
        else
            return false;
    }
    //function to see if objects lesser than the other
    bool operator<(Date d) {
        if (this->year < d.year)
            return true;
        else if (this->month < d.month)
            return true;
        else if (this->day < d.day)
            return true;
        else
            return false;
    }
    //function to see if object is not equal to the other
    bool operator!=(Date d) {
        if (this->year != d.year && this->month != d.month && this->day != d.day)
            return true;
        else
            return false;
    }
    //function to see if object is equal to the other
    bool operator==(Date d) {
        if (this->year == d.year && this->month == d.month && this->day == d.day)
            return true;
        else
            return false;
    }
    //function to see if the year is a leap year or not
    bool isLeapYear() {
        if (year % 4 == 0) 
            return true;
        else
            return false;

    }
    //displaying the date in string format
    string ToString() {
        string date = "/0";

        date += year;
        date += "/";

        if (month < 10)
            date += "0";
        date += month;
        date += "/";

        if (day < 10)
            date += "0";
        date += day;
        //cout << date<<endl;
        return date;
    }
};

#endif // !DATE_H_
