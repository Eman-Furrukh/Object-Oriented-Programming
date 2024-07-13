class Date
{
    // Think about private data members

public:
    Date(int year, int month, int day);
    Date operator=(Datd d);
    Date operator+(int m);
    Date operator-(int m);
    Date operator+(Date d);
    Date operator-(Date d);
    bool operator>(Date d);
    bool operator>=(Date d);
    bool operator<=(Date d);
    bool operator<(Date d);
    bool operator!=(Date d);
    bool operator==(Date d);
    int getDay();
    int getMonth();
    int getYear();
    bool isLeapYear();
    string toString();
    // Comments are included in your assignment file explaining these functions
}
