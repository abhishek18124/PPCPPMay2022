#include<iostream>

using namespace std;

int f(int* arr, int n, int i) {
	// base case
	
	// if(i == n-1) {
	// 	// compute the sum of elements in the subarray arr[n-1...n-1]
	// 	return arr[n-1];
	// }

	if(i == n) {
		// compute the sum of elements in the subarray arr[n...n-1] [empty subarray]
		return 0;
	}

	// recursive case

	// 1. ask your friend for the sum of elements in the subarray arr[i+1....n-1]
	int A = f(arr, n, i+1);

	return arr[i] + A;

}

int main() {

	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);

	cout << f(arr, n, 0) << endl;

	return 0;
}