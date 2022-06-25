#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30};
	int n = sizeof(arr) / sizeof(int);

	// iterate over numbers from 0 to (2^n)-1 ; pow(2, n)-1
	for(int num=0; num<(1<<n); num++) {
		// for each num, iterate over its n-bit representation
		// from right to left starting from the 0th bits
		// and going all the way towards its (n-1)th bit
		for(int i=0; i<n; i++) {
			// if the ith bit of num is set, include
			// the value at the ith index of the arr
			// in the subseq.
			if((num>>i)&1) {
				cout << arr[i] << " ";
			}
		}
		cout << endl;
	}

	return 0;

}
