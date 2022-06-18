/*

Given an integer matrix 'mat' of dimensions m x n, write a function that prints
the matrix in spiral form.

Example :
	Input : mat[][] = [[1,  2,  3,  4],
					   [5,  6,  7,  8],
					   [9,  10, 11, 12],
					   [13, 14, 15, 16]]

	Output : 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

	Input : mat[][] = [[1,  2,  3,  4],
					   [5,  6,  7,  8],
					   [9,  10, 11, 12]]

	Output : 1 2 3 4 8 12 11 10 9 5 6 7

*/

#include<iostream>

using namespace std;

void spiralPrint(int mat[][10], int m, int n) {

	int sr = 0;
	int sc = 0;
	int er = m-1;
	int ec = n-1;

	while(sr <= er and sc <= ec) {

		// 1. print the sr
		for(int j=sc; j<=ec; j++) {
			cout << mat[sr][j] << " ";
		}

		sr++;

		// 2. print the ec
		for(int i=sr; i<=er; i++) {
			cout << mat[i][ec] << " ";
		}

		ec--;

		// 3. print the er
		if(sr <= er) {
			for(int j=ec; j>=sc; j--) {
				cout << mat[er][j] << " ";
			}

			er--;
		}
 
		// 4. print the sc
		if(sc <= ec) {
			for(int i=er; i>=sr; i--) {
				cout << mat[i][sc] << " ";
			}
			sc++;
		}

	}

}

int main() {
	
	int mat[10][10] = {{1,  2,  3,  4},
					   {5,  6,  7,  8},
					   {9,  10, 11, 12}};

	int m = 3;
	int n = 4;

	spiralPrint(mat, m, n);
	
	return 0;
}