//============================================================================
// Name        : q4.cpp
// Author      : Eman Furrukh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "temp.h"
using namespace std;

int main() {
	HugeInteger Array1;
	HugeInteger Array2;
	HugeInteger Array3, Array4;

	//input and output of both arrays
	Array1.input(40);
	Array1.output(40);
	Array2.input(40);
	Array2.output(40);

	//adding and subtracting both arrays
	Array3 = Array2.add(Array1);
	Array4 = Array2.subtract(Array1);
	cout<<"Adding: "<<Array3<<endl;
	cout<<"Subtracting: "<<Array4<<endl;

	//performing the boolean operations on both arrays
	if(Array1.isEqualTo(Array2) == true)
		cout<<"Array1 == Array2\n";
	if(Array1.isNotEqualTo(Array2) == false)
		cout<<"Array1 != Array2\n";
	if(Array1.isGreaterThan(Array2) == true)
		cout<<"Array1 > Array2\n";
	if(Array1.isLessThan(Array2) == false)
		cout<<"Array1 < Array2\n";
	if(Array1.isGreaterThanOrEqualTo(Array2) == true)
		cout<<"Array1 >= Array2\n";
	if(Array1.isLessThanOrEqualTo(Array2) == false)
		cout<<"Array1 <= Array2\n";
	if(Array1.isZero(Array2) == true)
		cout<<"Array1 = Array2 = 0\n";
	return 0;
}
