/*    TASK 2   */

#include <iostream>
using namespace std;

int main() {
	int* num;
	num = new int;
	cout << "Enter number to calculate factorial: ";
	cin >> *num;
	float fact = 1.0;
	for (int i = 1; i <= *num; i++)
		fact *= i;
	cout << "Factorial of " << *num << " is " << fact << endl;
	delete num;
	return 0;
}
