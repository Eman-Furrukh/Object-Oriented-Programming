/*
 * temp.cpp
 *
 *  Created on: Apr 20, 2022
 *      Author: DELL
 */

#include "temp.h"
#include <iostream>
using namespace std;

//default constructor
Rational::Rational() {
    numerator = denominator = 0;
}

//parameterised constructor
Rational::Rational (int n, int d) {
    numerator = n;
    denominator = d;
}

//adding both rational numbers
Rational Rational::Add(const Rational &obj) {
    Rational add;
    add.numerator = this->numerator * obj.denominator + obj.numerator * this->numerator;
    add.denominator = this->denominator * obj.denominator;
    add.commonDivisor();
    return add;
}

//subtracting both rational numbers
Rational Rational::Subtract(const Rational &obj1) {
    Rational sub;
    sub.numerator = this->numerator * obj1.denominator - obj1.numerator * this->numerator;
    sub.denominator = this->denominator * obj1.denominator;
    sub.commonDivisor();
    return sub;
}

//multiplying both rational numbers
Rational Rational::Multiply(const Rational &obj2) {
    Rational prod;
    prod.numerator = this->numerator * obj2.numerator;
    prod.denominator = this->denominator * obj2.denominator;
    prod.commonDivisor();
    return prod;
}

//dividing both rational numbers
Rational Rational::Divide(const Rational &obj3) {
    Rational div;
    div.numerator = this->numerator * obj3.denominator;
    div.denominator = this->denominator * obj3.numerator;
    div.commonDivisor();
    return div;
}

//displaying rational number
void Rational::display() {
    if( numerator == 0)
        cout<<"Ans. 0 \n";
    else if (denominator == 0)
        cout<<"Math Error\n";
    else
        cout<<"("<<numerator<<"/"<<denominator<<")";
}

//displaying rational number as a floating point number
void Rational::displayFloatingPoint() {
    float quotient,remainder;
    quotient = numerator / denominator;
    remainder = numerator % denominator;
    cout<<"\tFloating Point: "<<quotient<<"."<<remainder<<endl;
}

//finding the simplified form of rational number
void Rational::commonDivisor(void) {
    int largest, cd = 0;
    if(numerator > denominator)
        largest = numerator;
    else
        largest = denominator;
    for(int i=2;i<=largest;++i)
    {
        if(numerator % i == 0 && denominator % i == 0)
            cd = i;
    }
    if(cd != 0)
    {
        numerator /= cd;
        denominator /= cd;
    }
}


