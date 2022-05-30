#include<iostream>

using namespace std;

int main() {

	int A[] = {50, 40, 30, 20, 10};
	int n = sizeof(A) / sizeof(int);

	for(int i=1; i<n; i++) {
		// in the ith pass, place the largest
		// element in the unsorted part of the
		// array to its correct postion

		bool flag = false; // assume no swaps will be done in the ith pass

		for(int j=0; j<n-i; j++) {
			if(A[j] > A[j+1]) {
				swap(A[j], A[j+1]);
				flag = true;
			}
		}

		if(!flag) { // flag == false
			// no swaps happened in the current pass
			break;
		}
	}

	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;


	return 0;
}