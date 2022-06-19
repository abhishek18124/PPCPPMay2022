// N <= 100

#include<iostream>

using namespace std;

int totalWater(int* A, int N) {

	// 1. construct lmax[]
	int lmax[100];
	lmax[0] = A[0];
	for(int i=1; i<N; i++) {
		lmax[i] = max(A[i], lmax[i-1]);
	}

	// 2. construct rmax[]
	int rmax[100];
	rmax[N-1] = A[N-1];
	for(int i=N-2; i>=0; i--) {
		rmax[i] = max(A[i], rmax[i+1]);
	}

	int total = 0;
	
	for(int i=0; i<N; i++) {
		int h_i = A[i];
		int w_i = min(lmax[i], rmax[i]) - h_i;
		total += w_i;
	}

	return total;

}

int main() {

	int A[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	int N = sizeof(A) / sizeof(int);

	cout << totalWater(A, N) << endl;

	return 0;
}