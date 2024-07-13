/*
 * temp.h
 *
 *  Created on: Apr 20, 2022
 *      Author: DELL
 */

#ifndef TEMP_H_
#define TEMP_H_

class HugeInteger {
	int size;
	int *arr;
public:
    HugeInteger();
    HugeInteger(int s);
    ~HugeInteger();
    void input(int s);
    void output(int s);
    HugeInteger add(const HugeInteger &obj);
    HugeInteger subtract(const HugeInteger &obj);
    bool isEqualTo(const HugeInteger &obj);
    bool isNotEqualTo(const HugeInteger &obj);
    bool isGreaterThan(const HugeInteger &obj);
    bool isLessThan(const HugeInteger &obj);
    bool isGreaterThanOrEqualTo(const HugeInteger &obj);
    bool isLessThanOrEqualTo(const HugeInteger &obj);
    bool isZero(const HugeInteger &obj);
};

#endif /* TEMP_H_ */
