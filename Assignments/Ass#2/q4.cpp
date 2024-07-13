#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//                formula for pi                // 
//   p = 4 * (1-1/3+1/5-1/7+1 /9-1/11+1/13+…)   //
//               (-1)^n / (2n-1)                //


//function to approximate value of pi
float PiValue(int n)
{
	if(n == 0)
		return 0;
	
	if(n == 1)
		return 4;
	else
		return ((4*(pow(-1,n)) / (2*n-1)) + (PiValue(n-1)));
}

//main function
int main()
{
	int num;
	
	cout<<fixed<<showpoint<<setprecision(11);
	cout<<"Enter an odd number: ";
	cin>>num;
	   
	if(num % 2 == 0)
	    cout<<"You have entered an Even Number, try again.\n";
	else
	{
		cout<<"Answer: ";
		cout<<PiValue(num);		
	}
    cout<<endl;
	
	return 0;
}
