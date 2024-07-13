#include "ExtendedCharacter.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//default constructor
ExtendedCharacter::ExtendedCharacter() {
	str = "0000000000000000";
}

//parameterized constructor (int)
ExtendedCharacter::ExtendedCharacter(int b) {
	str = toString(b); 
}

//parametrized constructor (char)
ExtendedCharacter::ExtendedCharacter(char c) {
	str = set(c);
}

//set value
ExtendedCharacter::void set(char c) {
	str = toString(c);
}

//get value
ExtendedCharacter::string get() {
	return str;
}
//converts character into binary equivalent and return as string
ExtendedCharacter::string toString(char c) {
	int n;
	string storeBinary = " ";
    for(i=0;i<16;i++)
	{     
    	n = c % 2;   
		storeBinary += toString(n);
    	c = c / 2;  
	} 
	int a,b;
	for(a=0;b=16;a<16;b>0;a++;b--)
		storeBinary = "0" + storeBinary;
	return storeBinary;
}

//assign objects
ExtendedCharacter::ExtendedCharacter& operator=(const ExtendedCharacter &obj) {
	ExtendedCharacter temp;
	temp = obj.str;
	return temp;
}

//add objects
ExtendedCharacter::ExtendedCharacter& operator+(const ExtendedCharacter &obj) { 
	ExtendedCharacter temp;
	temp = this->str + obj.str;
	return temp;
}

//minus objects
ExtendedCharacter::ExtendedCharacter& operator-(const ExtendedCharacter &obj) {
	ExtendedCharacter temp;
	temp = this->str - obj.str;
	return temp;
}

//equate objects
ExtendedCharacter::bool operator==(const ExtendedCharacter &obj) {
	bool flag;
	if(this->str == obj.str)
		flag = true;
	else
		flag false;
	return flag;
}

//not equal
ExtendedCharacter::bool operator!=(const ExtendedCharacter &obj) {
	bool flag;
	if(this->str != obj.str)
		flag = true;
	else
		flag false;
	return flag;
}

//less than or equal to
ExtendedCharacter::bool operator<=(const ExtendedCharacter &obj) {
	bool flag;
	if(this->str <= obj.str)
		flag = true;
	else
		flag false;
	return flag;	
}

//greater than or equal to
ExtendedCharacter::bool operator>=(const ExtendedCharacter &obj) {
	bool flag;
	if(this->str >= obj.str)
		flag = true;
	else
		flag false;
	return flag;
}

//less than
ExtendedCharacter::bool operator<(const ExtendedCharacter &obj) {
	bool flag;
	if(this->str < obj.str)
		flag = true;
	else
		flag false;
	return flag;	
}

//greater than
ExtendedCharacter::bool operator>(const ExtendedCharacter &obj) {
	bool flag;
	if(this->str > obj.str)
		flag = true;
	else
		flag false;
	return flag;	
}

//incrementing object by one
ExtendedCharacter::ExtendedCharacter& operator++() {
	ExtendedClass temp;
	temp = this-> + 1;
	str = toString(temp);
	return str;
}

//incrementing object by one (int)
ExtendedCharacter::ExtendedCharacter& operator++(int) {
	ExtendedClass temp;
	temp = this->str + 1;
	return temp;
}

//decrementing object by one
ExtendedCharacter::ExtendedCharacter& operator--() {
	ExtendedClass temp;
	temp = this-> - 1;
	str = toString(temp);
	return str;
}

//decrementing object by one(int)
ExtendedCharacter::ExtendedCharacter& operator--(int) {
	ExtendedClass temp;
	temp = this->str - 1;
	return temp;
}

//converts extended character into an integer
ExtendedCharacter::operator int() {
    int n = 0;
    for (int i=0;i<str.length();i++) {
        n += (str[i] - '0') * (pow(2, str.length() - i - 1));
    }
    return n;	
}

//converts extended character into an integer
ExtendedCharacter::operator short() {
	short denary;
    for (int i=0;i<16;i++) {
        denary = denary + (str[i] - '0') * (pow(2, 15 - i));
    }
    return denary;		
}

//given the range of integers, determines if char is an alphabet(lower/upper), number
ExtendedCharacter::void operator()(int n, int x) {
 	if (n >= 48 && n <= 57)
        cout << "Char is an Integer.";
    else if (n >= 65 && n <= 122) 
        cout << "Char is an Alphabet";
    else 
        cout << "Char is neither an Alphabet or an Integer.";
	cout<<endl;  
}

