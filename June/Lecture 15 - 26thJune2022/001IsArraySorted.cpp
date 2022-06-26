#include<iostream>

using namespace std;

bool isSorted(int* arr, int n, int i) {
	// base case
	if(i == n-1) {
		// check if the arr[n-1...n-1] is sorted ?
		return true;
	}

	// recursive case

	// check if the arr[i...n-1] is sorted ?

	// // ask your friend if arr[i+1...n-1] is sorted ?
	// bool ansFromMyFriend = isSorted(arr, n, i+1);

	// return arr[i] < arr[i+1] and ansFromMyFriend; 

	return arr[i] < arr[i+1] and isSorted(arr, n, i+1);
}

int main() {

	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);

	isSorted(arr, n, 0) ? cout << "true" << endl :
	                      cout << "false" << endl;

	return 0;
}