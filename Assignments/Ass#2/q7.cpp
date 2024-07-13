#include <iostream>
using namespace std;

void printChar(char c, int n)
{
    if(n == 0)
      return;
    else
	{
		cout<<c;
		printChar(c,n-1);
	}
}

void printPattern3(int a, int b)
{
	if(a > b)
	    return;
	    
	//top triangle
	printChar(' ',b-a);
	printChar('*',a);
	cout<<endl;
	printPattern3(a+1,b);
	
	//bottom triangle
	printChar('*',b-a);
	printChar('*',a);
	cout<<endl;   
}

int main()
{
	printPattern3(1,5);
	return 0;
}
