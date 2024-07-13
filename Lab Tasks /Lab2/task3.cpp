/*   TASK 3  (A)    */

#include <iostream>
using namespace std;

int main() {
	int *ptr1,*ptr2,*ptr3;
	ptr1 = new int;
	ptr2 = new int;
	ptr3 = new int;
	cout << "Enter three numbers: ";
	cin >> *ptr1 >> *ptr2 >> *ptr3;
	
	if (*ptr1 > *ptr2)
	{
		if (*ptr1 > *ptr3)
			cout << *ptr1 << " is the largetst.\n";
	}
	else if (*ptr2 > *ptr1)
	{
		if (*ptr2 > *ptr3)
			cout << *ptr2 << " is the largetst.\n";
	}
	else if (*ptr3 > *ptr1)
	{
		if (*ptr3 > *ptr2)
			cout << *ptr3 << " is the largetst.\n";
	}

	delete ptr1;
	delete ptr2;
	delete ptr3;
	return 0;
}
