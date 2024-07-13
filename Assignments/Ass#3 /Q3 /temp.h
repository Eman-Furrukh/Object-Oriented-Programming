/*
 * temp.h
 *
 *  Created on: Apr 20, 2022
 *      Author: DELL
 */

#ifndef TEMP_H_
#define TEMP_H_

class Rational {
    int numerator;
    int denominator;
    void commonDivisor();
public:
    Rational();
    Rational(int n, int d);
    Rational Add(const Rational &obj);
    Rational Subtract(const Rational &obj);
    Rational Multiply(const Rational &obj);
    Rational Divide(const Rational &obj);
    void display();
    void displayFloatingPoint();
};

#endif /* TEMP_H_ */
