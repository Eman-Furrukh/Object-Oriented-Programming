/////	  21I-1726	   /////
/////	EMAN FURRUKH   /////
/////	ASSIGNMENT 1   /////
/////	QUESTION 6c    /////

#include <iostream>
using namespace std;

void PrintPattern1(int n, int k, char ch1, char ch2) {
    static int change = 0;
    if(n == 0)
        return;
    else {
        cout<<n;
        for(int i = 1; i <=n; i++)
        	cout << ch1;
        if(n == k || change == 1) {
            n--;
            ch1 = ch2;
            change = 1;
        }
        else if(change == 0) 
            n++;
        PrintPattern1(n, k, ch1, ch2);
    }
}

int main() {
	int num1,num2;
	char ch1,ch2;
	cout<<"Enter starting and ending numbers: ";
	cin>>num1>>num2;
	cout<<"Enter two characters: ";
	cin>>ch1>>ch2;
    PrintPattern1(num1, num2, ch1, ch2);
    return 0;
}

