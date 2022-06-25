#include<iostream>

using namespace std;

int f(int n) {

	// base case
	
	// if(n == 0) {
	// 	return 0;
	// }

	// if(n == 1) {
	// 	return 1;
	// }

	if(n == 0 || n == 1) {
		return n;
	}

	// recursive case

	// 1. ask your friend to calculate the (n-1)th fibonacci no.
	int A = f(n-1);

	// 2. ask your friend to calculate the (n-2)th fibonacci no.
	int B = f(n-2);

	return A + B;

}

int main() { 

	int n = 4;

	cout << f(n) << endl;

	return 0;
}