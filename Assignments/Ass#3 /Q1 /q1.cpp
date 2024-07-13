//============================================================================
// Name        : q1.cpp
// Author      : Eman Furrukh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "temp.h"
using namespace std;

int main() {
	int Size;
	cout<<"Enter size of Array: ";
	cin>>Size;

	Number Array;
	Array.storeNumber(Size);
	Array.displayArray(Size);
	cout<<Array.retrieveNumber(Size)<<endl<<endl;
	cout<<"Highest: "<<Array.highest(Size)<<endl;
	cout<<"Lowest: "<<Array.lowest(Size)<<endl;
	cout<<"Average: "<<Array.average(Size)<<endl;
	return 0;
}


