/*
 * temp.cpp
 *
 *  Created on: Apr 20, 2022
 *      Author: DELL
 */

#include "temp.h"
#include <iostream>
using namespace std;

HugeInteger::HugeInteger() {
	size = 40;
	arr = new int [size];
}

HugeInteger::HugeInteger(int s) {
	s = size ;
	for(int i=0;i<s;i++)
	{
		arr[i] = 0;
	}
}

HugeInteger::~HugeInteger() {
	delete [] arr;
}

void HugeInteger::input(int s) {
	for(int i=0;i<s;i++)
	{
		cout<<"Enter a number: ";
		cin>>arr[i];
	}
	cout<<endl;
}

void HugeInteger::output(int s) {
	cout<<"40-digit Number is: ";
	for(int i=0;i<s;i++)
	{
		cout<<arr[i];
	}
	cout<<endl;
}

HugeInteger HugeInteger::add(const HugeInteger &obj) {
	 HugeInteger temp;
	 int carry = 0;
	 for(int i=39;i>=0;i--) {
		 temp.arr[ i ] = this -> arr[ i ] + obj.arr[ i ] + carry;
		 if(temp.arr[ i ] > 9 )
		 {
			temp.arr[ i ] %= 10;
			carry = 1;
		 }
		 else
			carry = 0;
	 }
	 return temp;
}

HugeInteger HugeInteger::subtract(const HugeInteger &obj) {
	 HugeInteger temp;
	 int borrow = 0;
	 for( int i = 39; i >= 0; i-- ) {
		 if(this -> arr[i] < obj.arr[i] ) {
			  temp.arr[ i ]=(this -> arr[i]+10)- obj.arr[i] - borrow;
			  borrow = 1;
		 }
		 else {
			 temp.arr[ i ]= this -> arr[i] - obj.arr[ i ] - borrow;
			 borrow = 0;
		 }
	 }
	 return temp;
}

bool HugeInteger::isEqualTo(const HugeInteger &obj) {
    bool flag;
	for(int i=0;i<40;i++)
    {
    	if(this->arr[i] == obj.arr[i])
    		flag = true;
    }
	return flag;
}

bool HugeInteger::isNotEqualTo(const HugeInteger &obj) {
    bool flag;
	for(int i=0;i<40;i++)
    {
    	if(this->arr[i] == obj.arr[i])
    		flag = false;;
    }
	return flag;
}

bool HugeInteger::isGreaterThan(const HugeInteger &obj) {
	bool flag;
	for(int i=0;i<40;i++)
	{
		if(this->arr[i] > obj.arr[i])
			flag = true;
	}
	return flag;
}

bool HugeInteger::isLessThan(const HugeInteger &obj) {
	bool flag;
	for(int i=0;i<40;i++)
	{
		if(this->arr[i] > obj.arr[i])
			flag = false;
	}
	return flag;
}

bool HugeInteger::isGreaterThanOrEqualTo(const HugeInteger &obj) {
	bool flag;
	for(int i=0;i<40;i++)
	{
		if(this->arr[i] >= obj.arr[i])
					flag = true;
	}
	return flag;
}

bool HugeInteger::isLessThanOrEqualTo(const HugeInteger &obj) {
	bool flag;
	for(int i=0;i<40;i++)
	{
		if(this->arr[i] >= obj.arr[i])
					flag = false;
	}
	return flag;
}

bool HugeInteger::isZero(const HugeInteger &obj) {
	bool flag;
	for(int i=0;i<40;i++)
	{
		if(this->arr[i] == 0 && obj.arr[i] == 0)
			flag = true;
	}
	return flag;
}


