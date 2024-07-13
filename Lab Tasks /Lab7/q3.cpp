#include <iostream>
using namespace std;

struct TIME_PERIOD
{
  int sec;
  int min;
  int hours;
};

void TimeDifference(struct TIME_PERIOD, struct TIME_PERIOD, struct TIME_PERIOD *);

int main()
{
    struct TIME_PERIOD t1, t2, difference;

    cout<<"Enter time1:\n";
    cout<<"Enter hours, minutes and seconds: ";
    cin>>t1.hours>>t1.min>>t1.sec;
    cout<<"Enter time2:";
    cout<<"Enter hours, minutes and seconds: ";
    cin>>t2.hours >> t2.min >> t2.sec;
    
    TimeDifference(t1, t2, &difference);

    cout<<"\nThe Time Period difference is: "<<difference.hours<<":"<<difference.min<<":"<<difference.sec;
    return 0; 
}

void TimeDifference(struct TIME_PERIOD t1, struct TIME_PERIOD t2, struct TIME_PERIOD *difference)
{
    
    if(t2.sec > t1.sec)
    {
        --t1.min;
        t1.sec += 60;
    }
    difference->sec = t1.sec - t2.sec;

    if(t2.min > t1.min)
    {
        --t1.hours;
        t1.min += 60;
    }
    difference->min = t1.min-t2.min;
    difference->hours = t1.hours-t2.hours;
}
