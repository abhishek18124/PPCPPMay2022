#include<iostream>

using namespace std;

int firstOcc(int* arr, int n, int t, int i) {

	// base case
	
	if(i == n-1) {
		// find the index of the first occ. of the t in arr[n-1...n-1]	
		if(arr[n-1] == t) {
			return n-1;
		}
		return -1;
	}

	// if(i == n) {
	// 	// find the index of the first occ. of the t in arr[n...n] [empty subarry]
	// 	return -1;
	// }

	// recursive case

	// find the index of the first occ. of the t in arr[i...n]	
	if(arr[i] == t) {
		return i;
	}

	// find the index of the first occ. of the t in arr[i+1...n]	
	return firstOcc(arr, n, t, i+1);

}

int main() {

	int arr[] = {10, 20, 20, 30, 40};
	int n = sizeof(arr) / sizeof(int);
	int t = 20;

	cout << firstOcc(arr, n, t, 0) << endl;
	
	return 0;
}