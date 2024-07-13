//============================================================================
// Name        : q3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "temp.h"
using namespace std;

int main() {
    int n1,d1,n2,d2;
    cout<<"Enter four numbers (n1/d1 and n2/d2): ";
    cin>>n1>>d1>>n2>>d2;

    Rational num1(n1,d1), num2(n2,d2), t;

    //displaying addition of both numbers
    cout<<"Addition:\n\t";
    num1.display();
    cout<<" + ";
    num2.display();
    t = num1.Add(num2);
    cout<<" = ";
    t.display();
    cout<<endl;
    t.displayFloatingPoint();
    cout<<endl;

    //displaying subtraction
    cout<<"Subtraction:\n\t";
    num1.display();
    cout<<" - ";
    num2.display();
    t = num1.Subtract(num2);
    cout<<" = ";
    t.display();
    cout<<endl;
    t.displayFloatingPoint();
    cout<<endl;

    //displaying multiplication
    cout<<"Multiplication:\n\t";
    num1.display();
    cout<<" * ";
    num2.display();
    t = num1.Multiply(num2);
    cout<<" = ";
    t.display();
    cout<<endl;
    t.displayFloatingPoint();
    cout<<endl;

    //displaying division
    cout<<"Division:\n\t";
    num1.display();
    cout<<" / ";
    num2.display();
    t = num1.Divide(num2);
    cout<<" = ";
    t.display();
    cout<<endl;
    t.displayFloatingPoint();
    cout<<endl;
    return 0;
}
