/*

Given an integer matrix 'mat' of dimensions m x n, write a program that prints
the matrix in wave form.

Example :
	Input : mat[][] = [[1, 2, 3],
					   [4, 5, 6],
					   [7, 8, 9]]

	Output : 1 4 7 8 5 2 3 6 9

*/

#include<iostream>

using namespace std;

void wavePrint(int mat[][3], int m, int n) {
	for(int j=0; j<n; j++) {
		if(j%2 == 0) {
			// jth col is an even coln.
			for(int i=0; i<m; i++) {
				cout << mat[i][j] << " ";
			}
		} else {
			// jth col. is an odd coln.
			for(int i=m-1; i>=0; i--) {
				cout << mat[i][j] << " ";
			}
		}
	}

	cout << endl;
}

int main() {

	int mat[][3] = {{1, 2, 3},
					{4, 5, 6},
					{7, 8, 9}};

	int m = 3;
	int n = 3;

	wavePrint(mat, m, n);

	return 0;
}