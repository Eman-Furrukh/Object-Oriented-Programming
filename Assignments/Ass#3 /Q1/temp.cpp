/*
 * temp.cpp
 *
 *  Created on: Apr 20, 2022
 *      Author: DELL
 */

#include "temp.h"
#include <iostream>
using namespace std;

//default constructor
Number::Number() {
	size = 0;
	arr = new float [size];
}

//parameterised constructor
Number::Number(int s) {
	size = s;
}

//destructor
Number::~Number() {
	delete [] arr;
}

//function to store the elements of array
void Number::storeNumber(int s) {
	for(int i=0;i<s;i++)
	{
		cout<<"Enter a value: ";
		cin>>arr[i];
	}
	cout<<endl;
}

//displays the array
void Number::displayArray(int s) {
	cout<<"Array: \n";
	for(int i=0;i<s;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl<<endl;
}

//function retrieves an element from the array
float Number::retrieveNumber(int s) {
	float num;
	int temp = 0;
	cout<<"Enter a number to retrieve: ";
	cin>>num;
	for(int i=0;i<s;i++)
	{
		if(arr[i] == num)
			temp = i;
	}
	cout<<num<<" found at index: ";
	return temp;
}

//function to find the largest value
float Number::highest(int s) {
	float max = -999999999;
	for(int i=0;i<s;i++)
	{
		if(arr[i]>max)
			max = arr[i];
	}
	return max;
}

//function to find the smallest value
float Number::lowest(int s) {
	float min = 999999999;
		for(int i=0;i<s;i++)
		{
			if(arr[i]<min)
				min = arr[i];
		}
		return min;
}

//function to find the average
float Number::average(int s) {
	float sum=0l,avg;
	for(int i=0;i<s;i++)
	{
		sum += arr[i];
	}
	avg = sum/s;
	return avg;
}



