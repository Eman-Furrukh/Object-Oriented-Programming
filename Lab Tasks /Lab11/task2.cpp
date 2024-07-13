#include <iostream>
#include <string>
using namespace std;

class String {
	char *a;
	int s;
public:
	String(int size) {
		size = s;
		a = new char[size];
	}
	void set() {
		cout<<"Enter string: ";
		cin.getline(a,s); 
		cout<<endl;
	}
	void display() {
		cout<<s<<endl;
	}
	String operator+(String s2)
	{
		string str;
		for(int i=0;s[i]!='\0';i++)
		{
			str.s[i] = s[i];
			for(int j=0;s2.s[j]!='\0';i++;j++)
			{
				str.s[i] = s2.s[j];
				str.s[i] = '\0';
			}
		}
		return str;
	}
};

int main() {
	String arr,arr2,arr3;
	arr.set();
	arr2.set();
	arr3 = arr + arr2;
	arr3.display();
	return 0;
}



