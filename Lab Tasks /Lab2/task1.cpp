/*   TASK 1  */

#include <iostream>
using namespace std;

int main() {
	float* ptr1, * ptr2;
	ptr1 = new float;
	ptr2 = new float;
	cout << "Enter you marks: ";
	cin >> *ptr2;

	if (*ptr2 >= 91 && *ptr2 < 101)
		cout << "Grade: A+ \n";
	else if (*ptr2 >= 81 && *ptr2 <= 90)
		cout << "Grade: A \n";
	else if (*ptr2 >= 71 && *ptr2 <= 80)
		cout << "Grade: B \n";
	else if (*ptr2 >= 61 && *ptr2 <= 70)
		cout << "Grade: C \n";
	else if (*ptr2 >= 51 && *ptr2 <= 60)
		cout << "Grade: D \n";
	else if (*ptr2 <= 50 && *ptr2 >= 0)
		cout << "Grade: FAIL \n";
	else
		cout << "INVALID INPUT.\n";

	delete ptr2;
	return 0;
}
