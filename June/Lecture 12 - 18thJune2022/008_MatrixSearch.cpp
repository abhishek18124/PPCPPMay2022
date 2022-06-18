/*

Given an integer matrix 'mat' of dimensions m x n and an integer 't', write a program 
to search for 't' in 'mat'. 

If 't' is present in the matrix print its coordinates otherwise print (-1, -1).

Example :
	Input : mat[][] = [[1,  2,  3,  4],
					   [5,  6,  7,  8],
					   [9,  10, 11, 12],
					   [13, 14, 15, 16]]

			t = 10

	Output: (2, 1)

*/

#include<iostream>

using namespace std;

// bool matrixSearch(int mat[][4], int m, int n, int t) {

// 	for(int i=0; i<m; i++) {
// 		for(int j=0; j<n; j++) {
// 			if(mat[i][j] == t) {
// 				return true;
// 			}
// 		}
// 	}

// 	return false;

// }

// void matrixSearch(int mat[][4], int m, int n, int t) {

// 	for(int i=0; i<m; i++) {
// 		for(int j=0; j<n; j++) {
// 			if(mat[i][j] == t) {
// 				cout << "(" << i << ", " <<  j << ")" << endl;
// 				return;
// 			}
// 		}
// 	}

// 	cout << "(" << -1 << ", " << -1 << ")" << endl;

// }

pair<int, int> matrixSearch(int mat[][4], int m, int n, int t) {

	// pair<int, int> p = {-1, -1};
	
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			if(mat[i][j] == t) {
				return {i, j};
				// p.first = i;
				// p.second = j;
				// break;
			}
		}
	}

	return make_pair(-1, -1);
	// return p;

}

int main() {

	int mat[][4]  = {{1,  2,  3,  4},
					 {5,  6,  7,  8},
					 {9,  10, 11, 12},
					 {13, 14, 15, 16}};

	int m = 4;
	int n = 4;

	int t = 10;

	// matrixSearch(mat, m, n, t) ? cout << "true" << endl :
	// 							 cout << "false" << endl;

	// matrixSearch(mat, m, n, t);

	pair<int, int> p = matrixSearch(mat, m, n, t);

	cout << t << " found at (" << p.first << ", " << p.second << ")" << endl; 


	return 0;
}