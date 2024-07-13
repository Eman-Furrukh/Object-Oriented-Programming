#include <iostream>
using namespace std;

//finding uppercase letters in sentence
char findUpperCase(char *str, int index)
{ 
	if(str[index] == '\0')
	   return str[index];
	else
	{
		if(str[index] >= 'a' && str[index] <= 'z') 
		    str[index] -= 32;
		else 
			cout<<str[index];
		findUpperCase(str,index+1);
	}	
	return str[index];
}

int main()
{
	char str[10];
	
	cout<<"Enter a line of string in lowercase: ";
	cin.getline(str,10);
	
	cout<<"\nYour sentence is now: \n";
	cout<<findUpperCase(str,0);
	
	return 0;
}

