#include<iostream>

using namespace std;

int f(int* arr, int i) {
	// base case

	// if(i == 0) {
	// 	// compute the sum of elements in the subarray that ends at the 0th index i.e. arr[0...0]
	// 	return arr[0];
	// }

	if(i == -1) {
		// compute the sum of elements in the subarray that ends at the -1th index i.e. arr[0....-1]
		return 0;
	}
	
	// recursive case

	// 1. ask your friend for the sum of elements in the subarray arr[0....i-1]
	int A = f(arr, i-1);

	return arr[i] + A;

}

int main() {

	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);

	cout << f(arr, n-1) << endl;

	return 0;
}