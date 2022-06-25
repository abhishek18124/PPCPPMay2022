#include<iostream>

using namespace std;

int f(int a, int b) {
	// base case
	if(b == 0) {
		// return the product of a*0
		return 0;
	}

	// recursive case

	// 1. ask your friend for the product of a and b-1
	int A = f(a, b-1);

	return a + A;
}

int main() {

	int a = 3;
	int b = 4;

	cout << f(a, b) << endl;

	return 0;
}