#include <iostream>
using namespace std;

//performing factorial on number
long fact(int number)
{
	long product;
    if(number == 0)
        return 0;
    else
    {
	    product = number * fact(number-1);	
		return product;
	}	
}

//permutation 
long permutate(int n, int r)
{
	long x,y;
	x = fact(n);
	y = fact(n-r);
	return x/y;
}

int main()
{
	int num, items;
	cout<<"Enter a number: ";
	cin>>num;
	
	cout<<"Enter number of items: ";
	cin>>items;
	
	cout<<"Finding: P("<<num<<","<<items<<") = ";
	cout<<permutate(num,items);
	return 0;
}
