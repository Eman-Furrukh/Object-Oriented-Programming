/////	  21I-1726	   /////
/////	EMAN FURRUKH   /////
/////	ASSIGNMENT 1   /////
/////	QUESTION 6d    /////

#include<iostream>
using namespace std;

void Space(int space) {
	// base case
	if (space == 0) {
	    return;
	}
	cout << " ";
    Space(space - 1);
}

void Asterisk(char ch, int a) {
	// base case
	if (a == 0)
		return;
	cout << ch;
	Asterisk(ch, a - 1);
}

void PrintPattern(char ch, int x, int y) {
    // base case
	if (x == 0) 
	    return;
	Space(x - 1);
	Asterisk(ch, y - x + 1);
	cout << endl;
    PrintPattern(ch, x - 1, y);
}

int main() {
    PrintPattern('*', 5,5);
    return 0;
}
