/*     TASK 4      */

#include <iostream>
using namespace std;

int discountedValue(int* val) {
	int discount = 0, disValue;
	discount = *val * 0.1;
	disValue = *val - discount;
	return disValue;
}

int main() {
	int* value;
	value = new int;
	cout << "Enter purchase value: ";
	cin >> *value;
	if (*value > 2000)
	{
		cout << "Discount is approved.\n";
		cout << "Value after discount is: " << discountedValue(value) << endl;
	}
	else
	{
		cout << "Discount is disapporoved.\n";
		cout << "Value after discount is: " << value << endl;
	}

	delete value;
	return 0;
}
