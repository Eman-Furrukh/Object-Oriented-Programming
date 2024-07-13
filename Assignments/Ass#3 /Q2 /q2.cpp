//============================================================================
// Name        : q2.cpp
// Author      : Eman Furrukh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "temp.h"
using namespace std;

int main() {
	Array a;
	cout<<a.getAt(5)<<endl;
    cout<<a.setAt(5,15);
    cout<<a.subArr(3,5);
    cout<<a.subArr();
    //a.subArrPointer(3,6);
    //a.subArrPointer(4);
    a.push_back(3);
    a.pop_back();
    cout<<a.insert(2,14);
    cout<<a.erase(2,14);
    a.Size();
    cout<<a.length();
    a.clear();
    cout<<a.value(3);
    a.assign(3,20);
    //a.copy();
    //a.copy();
    a.display();
    cout<<a.isEmpty();
    a.find(10);
    cout<<a.equal(a);
    cout<<a.sort();
    a.reverse();
	return 0;
}


