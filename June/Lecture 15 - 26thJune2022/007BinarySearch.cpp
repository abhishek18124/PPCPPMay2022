#include<iostream>

using namespace std;

int binarySearch(int* A, int t, int s, int e) {

	// base case
	if(s > e) {
		return -1;
	}

	// recursive case

	int m = s+((e-s)>>1);// s+(e-s)/2;
	if(A[m] == t) {
		return m;
	} else if(A[m] > t) {
		// search for the target in A[s...m-1]
		return binarySearch(A, t, s, m-1);
	} else {
		// search for the target in A[m+1...e]
		return binarySearch(A, t, m+1, e);	
	}

}

int main() {

	int A[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int n = sizeof(A) / sizeof(int);

	int t = 2;

	cout << binarySearch(A, t, 0, n-1) << endl;

	return 0;
}