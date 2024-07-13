#include <iostream>
using namespace std;

//function to check whether num is prime num or not
bool isPrime(int n, int index)
{
    //case for if it's not a prime number
	if((n <= index) || (n%index == 0))
	  return false;
	//case for it it is a prime number
    if(index * index > n)
	  return true;	
	   
	return isPrime(n, index+1);
}

int main()
{
	int num;
	int i = 2;
	
	cout<<"Enter a number: ";
	cin>>num;
	
	if(isPrime(num,i))
       cout<<num<<" is a Prime Number.\n";
	else
	   cout<<num<<" is not a Prime Number.\n";
	   
	return 0;
}
