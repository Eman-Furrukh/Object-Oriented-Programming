#include <iostream>
using namespace std;

void Spaces(int space)
{
	if(space == 0)
	    return;
	cout<<" ";
	Spaces(space-1);
}

void Asterisk(int asterisk)
{
	if(asterisk == 0)
	    return;
	cout<<"* ";
	Asterisk(asterisk-1);
}

void printPattern3(int a, int b)
{
	if(a == 0)
	    return;
	//top triangle
	Spaces(a-1);
	Asterisk(b-a+1);
	cout<<endl;
	printPattern3(a-1,b);
	//bottom triangle
	Spaces(a-1);
	Asterisk(b-a+1);
	cout<<endl;
	
}

int main()
{
	int num=9;
	printPattern3(num,num);
	return 0;
}
