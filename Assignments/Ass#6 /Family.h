#pragma once
#ifndef FAMILY_H_
#define FAMILY_H_

#include "../assignment2/Date.h"
#include <string>
#include <iostream>
using namespace std;

class Person {
	string name;
	char gender;
	Date dob;
	int noOfChildren;
public:
	Person** children;
	//default constructor
	Person() {
		name = "\0";
		gender = '\0';
		noOfChildren = 3;
		children = new Person * [noOfChildren * noOfChildren];
		for (int i = 0; i < noOfChildren; i++)
			for (int j = 0; j < noOfChildren; j++)
				*(children + i * noOfChildren + j) = 0;
	}
	//parameterised constructor 
	Person(string n, char g, int day, int month, int year) {
		name = n;
		gender = g;
		day = 0;
		month = 0;
		year = 0;
	}
	//setters
	void setName(string n) {
		for (int i = 0; i < noOfChildren; i++)
			for (int j = 0; j < noOfChildren; j++)
				children[i][j] = n;
	}
	void setGender(char g) {
		gender = g;
	}
	void setDate(Date d) {
		dob = d;
	}
	void setNoOfChildren(int nOC) {
		noOfChildren = nOC;
	}
	//getters
	string getName() {
		return name;
	}
	char getGender() {
		return gender;
	}
	Date getDOB() {
		return dob;
	}
	int getNOC() {
		return noOfChildren;
	}
	//function that displays all data members
	void displayData() {

	}
};

/*
class FamilyTree {

};
*/
#endif // !FAMILY_H_
