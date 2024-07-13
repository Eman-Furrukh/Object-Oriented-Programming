#include <iostream>
using namespace std;

//function to calculate max no. of chocolates one can eat
int countMaxChoco(int money, int price, int wrap)
{
	int sum = 0,num;
	if(money == 0)
	   return sum;
	else 
	{
		money /= price;
		sum += wrap;
		countMaxChoco(money, price, money/2);
	}
}

int main()
{
	int money, price, wrap;
	cout<<"Enter the amount you have: ";
	cin>>money;
	cout<<"Enter the price of chocolate: ";
	cin>>price;
	cout<<"Enter the number of wrappers you have: ";
	cin>>wrap;

	cout<<"Output: "<<countMaxChoco(money,price,wrap)<<endl;
	
	return  0;
}
