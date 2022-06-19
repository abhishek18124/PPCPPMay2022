#include<iostream>

using namespace std;

int totalWater(int* A, int N) {

	int total = 0;
	
	for(int i=0; i<N; i++) {
		int h_i = A[i];

		// lmax_i : hgt. of the tallest building to the left of the ith building
		int lmax_i = h_i;
		for(int j=i-1; j>=0; j--) {
			lmax_i = max(lmax_i, A[j]);
		}

		// rmax_i : hgt. of the tallest building to the right of the ith building
		int rmax_i = h_i;
		for(int j=i+1; j<N; j++) {
			rmax_i = max(rmax_i, A[j]);
		}

		int w_i = min(lmax_i, rmax_i) - h_i;
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