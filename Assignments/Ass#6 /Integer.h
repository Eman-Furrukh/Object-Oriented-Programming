#ifndef INTEGER_H_
#define INTEGER_H_

#include <iostream>
#include <string>
//using namespace std;

class Integer {
	int integer;
	static int num;
public:
	//default constructor 
	Integer() {
		integer = 0;
	}
	//parametrized constructor
	Integer(int i) {
		integer = i;
	}
	// a parametrized constructor 
	/*Integer::*/ Integer(string i) {
		string x;
		x = i;
	}

	//setter
	void set(int i) {
		integer = i;
	}
	//getter
	int get()const {
		return integer;
	}

	//Returns the number of one-bits in the 2's complement binary 
	int bitCount() {
		int size = 0;
		int value = integer;
		int value2 = integer;
		while (value > 0) {
			size++;
			value = value / 10;
		}
		int n = 0;
		int count = 0;
		for (int i = 0; i < size; i++) {
			n = value2 % 10;
			if (n == 1)
				count++;
			value2 = integer / 10;
		}
		return count+1;
	}

	//Compares two Integer objects numerically. 
	/*int compareTo(Integer& obj) {
		if (this->integer = obj.integer)
			return 1;
		else
			return 0;
	}*/

	//Returns the value of this Integer as a double.
	double doubleValue() {
		double temp;
		temp = integer;
		return temp;
	}

	//Returns the value of this Integer as a float.
	float floatValue() {
		float temp;
		temp = integer;
		return temp;
	}

	//adds two Integers and return the result 
	Integer plus(const Integer& i) {
		Integer temp;
		temp.integer = this->integer + i.integer;
		return temp;
	}

	// subtracts two Integers and return the result 
	Integer minus(const Integer& i) {
		Integer temp;
		temp.integer = this->integer - i.integer;
		return temp;
	}

	//multiplies two Integers and return the result 
	Integer multiple(const Integer& i) {
		Integer temp;
		temp.integer = this->integer * i.integer;
		return temp;
	}

	//divides two Integers and return the result
	Integer divide(const Integer& i) {
		Integer temp;
		temp.integer = this->integer / i.integer;
		return temp;
	}

	/*Returns the number of zero bits preceding the highest-order
	("leftmost") one-bit in the two's complement binary representation of the specified int value.*/
	/*static int numberOfLeadingZeros(int i) {
		int val = 0, size = 0;
		int x;
		while (val != 0) {
			val = integer / 10;
			size++;
		}
		while (n != 0) {
			x =
		}
	}*/

	/*Returns the number of zero bits following the lowest-order
	("rightmost") one-bit in the two's complement binary representation of the specified int value.*/
	static int numberOfTrailingZeros(int i) {
		int count = 0;
		while (i != 1) {
			i = i % 10;
			if (i == 0)
				count++;
			i = i / 10;
		}
		return count;
	}

	//Returns string representation of i
	static string toBinaryString(int a) {
		int val = 0, size = 0;
		while (val != 0) {
			val = num / 10;
			size++;
		}
		string binary;
		for (int i = 0; i < 8; i++) {
			while (a != 0) {
				a = num % 2;
				if (a == 1)
					binary.append(to_string('1'));
				else
					binary.append(to_string('0'));
			}
		}
		return binary;
	}

	//Returns string representation of i in base16 
	static string toHexString(int i) {
		int val = 0, size = 0;
		while (val != 0) {
			val = i / 10;
			size++;
		}
		string hex;
		int r;
		for (int j = 0; j < size; j++) {
			r = i / 16;
			if (r == 10)
				hex.append(to_string('A'));
			else if (r == 11)
				hex.append(to_string('B'));
			else if (r == 12)
				hex.append(to_string('C'));
			else if (r == 13)
				hex.append(to_string('D'));
			else if (r == 14)
				hex.append(to_string('E'));
			else if (r == 15)
				hex.append(to_string('F'));
			else
				hex.append(to_string(i));
		}
		return hex;
	}

	//Returns string representation of i in base 8 
	static string toOctString(int i) {
		int val = 0, size = 0, num = i;
		while (val != 0) {
			val = i / 10;
			size++;
		}
		string oct;
		int octal;
		//int num= 0;
		while (num != 0) {
			octal = num % 8;
			oct.append(to_string(octal));
			num = num / 8;
			//i++;
		}
		return oct;
	}
}; 

int Integer::num;

#endif // !INTEGER_H_
