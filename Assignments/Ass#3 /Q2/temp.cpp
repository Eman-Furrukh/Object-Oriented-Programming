/*
 * temp.cpp
 *
 *  Created on: Apr 20, 2022
 *      Author: DELL
 */

#include "temp.h"
#include <iostream>
#include <vector>
using namespace std;

//default constructor
Array::Array() {
    s = 0;
    arr = new int [s];
}

//parameterized constructor
Array::Array(int size) {
	s = size;
}

//initialize array with existing array
Array::Array(int *arr, int size) {
    for(int i=0;i<size;i++)
    	arr[i] = 0;
}

/*copy constructor
Array::Array(const Array &){

} */

//returns index at i
int Array::getAt(int i) {
    int value=0;
    cout<<"Enter index: ";
    cin>>i;
    for(int index=0;index<s;index++)
    {
        if(index == i)
            value = arr[index];
    }
    return value;
}

//sets value at index i
void Array::setAt(int i, int val) {
    cout<<"Enter value: ";
    cin>>val;
    cout<<"Enter index to set value in: ";
    cin>>i;
    for(int index=0;index<s;index++)
    {
        if(index == i)
            arr[index] = val;
    }
}

//returns sub-array of size 'siz' starting from location 'pos'
Array Array::subArr(int pos, int siz) {
    cout<<"Enter position: ";
    cin>>pos;
    for(int i=0;i<siz;i++)
    {
        if(i<=pos)
            cout<<arr[i]<<" ";
    }
    return arr[pos];
}

//returns a sub-array from the given position to the end
Array Array::subArr(int pos) {
    cout<<"Enter position: ";
    cin>>pos;
    for(int i=0;i<s;i++)
    {
        if(i>=pos)
            cout<<arr[i]<<" ";
    }
    return arr[pos];
}

/*

//returns an array of size siz starting from location 'pos'
int * Array::subArrPointer(int pos, int siz) {

}

//returns an array from the given position to the end
int * Array::subArrPointer(int pos) {

}
*/

//adds an element to the end of the array
void Array::push_back(int a) {
	vector <int> arr;
	arr.push_back(a);
	for(int i:arr)
		cout<<i<<" ";
	cout<<endl;
}

//removes and returns the last element of the array
void Array::pop_back() {
	vector <int> arr;
	arr.pop_back();
	for(int i: arr)
		cout<<i<<" ";
	cout<<endl;
}

//inserts the value val at idx.return 1/-1 if success/dneORinvalid.shifts elements to the right after idx
int Array::insert(int idx, int val) {
	if(arr[idx] == val)
		return 1;
	else
		return -1;
}

//erases value val at idx.return 1/-1 if success/dneORinvalid. shifts elements to the left after idx
int Array::erase(int idx, int val) {
	if(idx>=0 && idx<s) {
	    arr[idx-1] = val;
	    arr[idx] = 0;
	    return 1;
	}
	else
		return -1;
}

void Array::Size() {
	int SIZE;
	cout<<"Enter the size of array: ";
	cin>>SIZE;
}

//returns the size of the array
int Array::length() {
	int l=s;
    return l;
}

//clears the contents of the array
void Array::clear() {
	for(int i=0;i<s;i++) {
		arr[i] = 0;
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"Array has cleared.\n";
}

//returns the value at idx
int Array::value(int idx) {
	int x;
	x = arr[idx];
	cout<<x<<endl;
	return x;
}

//assigns the value val to the element at index idx
void Array::assign(int idx, int val) {
	arr[idx] = val;
}

/*
//copy the passed array
void Array::copy(const Array& Arr) {

}

//copy the passed array
void Array::copy(const int * arr, int siz) {

}

*/

//displays the array
void Array::display() {
	for(int i=0; i<s; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

//returns true if the array is empty
bool Array::isEmpty() {
	bool flag;
	int i=0;
	while(flag == false)
	{
		if(arr[i] == 0)
			i++;
		else
			flag = true;
	}
	return flag;
}

//returns an array containing all indexes of the integer being searched
Array Array::find(int) {
	int num;
	cout<<"Enter the integer to find: ";
	cin>>num;
	cout<<num<<" can be found at indexes: ";
	for(int i=0;i<s;i++)
	{
		if(arr[i] == num)
			cout<<i<<" ";
	}
	cout<<endl;
}

//should return true if both arrays are the same
bool Array::equal(Array) {
	bool flag;

	return flag;
}

//sorts the array. returns true if the array is already sorted
int Array::sort() {
	int temp;
	for(int i=0; i<s; i++) {
		for(int j=i+1; j<s; j++) {
			if(arr[j] < arr[i]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout<<"Elements of array in sorted ascending order:"<<endl;
	for(int i=0; i<s; i++)
		cout<<arr[i]<<endl;
}

//reverses the contents of the array
void Array::reverse() {
	cout<<"Array in Reverse: \n";
	for(int i=s;i>0;i--)
		cout<<arr[i]<<" ";
	cout<<endl;
}

//destructor
Array::~Array() {
    delete [] arr;
}


