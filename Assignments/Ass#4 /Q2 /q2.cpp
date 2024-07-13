#include "Matrix.h"
#include <iostream>
using namespace std;

int main() {	
	Matrix M1(3,3), M2(3,3), M3(3,3); 
	Matrix M4 = M1 – M2 + M3; 
	Matrix M5 = M1(1,2); 
	return 0;
}

