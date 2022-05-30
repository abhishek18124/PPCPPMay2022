#include<iostream>

using namespace std;

int main() {

	int A[5]; // declaration

	int n = sizeof(A) / sizeof(int);
	// int n = sizeof(A) / sizeof(A[0]);

	// read values into array
	for(int i=0; i<n; i++) {
		cin >> A[i];
	}

	// print values stored inside the array 
	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	// print values stored inside the array in reverse
	for(int i=n-1; i>=0; i--) {
		cout << A[i] << " ";
	}

	cout << endl;

	return 0;
}