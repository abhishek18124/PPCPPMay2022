// contraints : m <= 10, n <= 10

#include<iostream>

using namespace std;

void merge(int* A, int m, int* B, int n, int* C) {

	int i = 0;
	int j = 0;
	int k = 0;

	while(i < m and j < n) {
		if(A[i] < B[j]) {
			C[k] = A[i];
			i++;
			k++;
		} else {
			C[k] = B[j];
			j++;
			k++;
		}
	}

	while(i < m) {
		C[k] = A[i];
		i++;
		k++;
	}

	while(j < n) {
		C[k] = B[j];
		j++;
		k++;
	}

}

int main() {

	int A[] = {1, 3, 5, 7};
	int B[] = {2, 4, 6};

	int m = sizeof(A) / sizeof(int);
	int n = sizeof(B) / sizeof(int);

	int C[20];

	merge(A, m, B, n, C);

	for(int i=0; i<m+n; i++) {
		cout << C[i] << " ";
	}

	cout << endl;

	return 0;
}