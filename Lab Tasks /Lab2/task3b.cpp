/*   TASK 3  (B)    */

#include <iostream>
using namespace std;

int main() {
	float* ptr1, * ptr2, * ptr3;
	ptr1 = new float;
	ptr2 = new float;
	ptr3 = new float;
	cout << "Enter three numbers: ";
	cin >> *ptr1 >> *ptr2 >> *ptr3;

	((*ptr1 > *ptr2) && (*ptr1 > *ptr3)) ? cout << *ptr1 << " is the greatest." :
		((*ptr2 > *ptr1) && (*ptr2 > *ptr3)) ? cout << *ptr2 << " is the greatest." :
		((*ptr3 > *ptr1) && (*ptr3 > *ptr2)) ? cout << *ptr3 << " is the greatest." : cout << *ptr2 << " is the greatest.";

	delete ptr1;
	delete ptr2;
	delete ptr3;
	return 0;
}
