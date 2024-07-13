#ifndef EXTENDEDCHARACTER_H
#define EXTENDEDCHARACTER_H
#include <string>

class ExtendedCharacter
{
	string str;
public:
	ExtendedCharacter();
	ExtendedCharacter(int);
	ExtendedCharacter(char);
	void set(char);
	string get();
	string toString(char);
	ExtendedCharacter& operator=(const ExtendedCharacter &);
	ExtendedCharacter& operator+(const ExtendedCharacter &);
	ExtendedCharacter& operator-(const ExtendedCharacter &);
	bool operator==(const ExtendedCharacter &);
	bool operator!=(const ExtendedCharacter &);
	bool operator<=(const ExtendedCharacter &);
	bool operator>=(const ExtendedCharacter &);
	bool operator<(const ExtendedCharacter &);
	bool operator>(const ExtendedCharacter &);
	ExtendedCharacter& operator++();
	ExtendedCharacter& operator++(int);
	ExtendedCharacter& operator--();
	ExtendedCharacter& operator--(int);
	operator int();
	operator short();
	void operator()(int, int);
};

#endif
