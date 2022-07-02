#include<iostream>

// n <= 100

using namespace std;

void merge(int* A, int s, int m, int e) {

	int i = s;
	int j = m+1;
	int k = s;

	int B[100];

	while(i <= m and j <= e) {
		if(A[i] < A[j]) {
			B[k] = A[i];
			i++;
			k++;
		} else {
			B[k] = A[j];
			j++;
			k++;
		}
	}

	while(i <= m) {
		B[k] = A[i];
		i++;
		k++;
	}

	while(j <= e) {
		B[k] = A[j];
		j++;
		k++;
	}

	for(int l=s; l<=e; l++) {
		A[l] = B[l];
	}

}

void mergeSort(int* A, int s, int e) {

	if(s >= e) {
		// an array of size 0 or size 1 is already sorted
		return;
	}

	// 1. divide the array into two-subarray around the mid-point
	int m = s + (e-s)/2;

	// 2. recursively sort the two sub-arrays 
	mergeSort(A, s, m);
	mergeSort(A, m+1, e);

	// 3. merge the two sorted arrays into a merged array
	merge(A, s, m, e);

}

int main() {

	int A[] = {50, 40, 30, 20, 10, 0};
	int n = sizeof(A) / sizeof(int);

	mergeSort(A, 0, n-1);

	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	return 0;
}