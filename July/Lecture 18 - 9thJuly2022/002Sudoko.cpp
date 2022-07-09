/*

Sudoku

Given a partially filled 'n x n' grid, the goal is to assign digits from 1 to 9 to the empty cells 
so that every row, column, and subgrid of size '√n x √n'  contains exactly one instance of 
the digits from 1 to 9. 

Assume 'n' is a perfect square, hence there are 'n' subgrids of size '√n x √n' each.


*/

#include<iostream>
#include<cmath>

using namespace std;

bool canPlaceDigit(int grid[][9], int n, int i, int j, int d) {

	for(int k=0; k<n; k++) {
		if(grid[i][k] == d or grid[k][j] == d) {
			return false;
		}
	}

	int rn = sqrt(n);
	int sx = i/rn * rn;
	int sy = j/rn * rn;
	
	for(int x=sx; x<sx+rn; x++) {
		for(int y=sy; y<sy+rn; y++) {
			if(grid[x][y] == d) {
				return false;
			}
		}
	}

	return true;



}

void solveSudoku(int grid[][9], int n, int i, int j) {

	// base case
	if(i == n) {
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cout << grid[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return;
	}


	// recursive case

	if(j == n) {
		// all the cells in the ith row are already assigned digits, so we can move the next row
		solveSudoku(grid, n, i+1, 0);
		return;
	}


	if(grid[i][j] != 0) {
		// (i, j)th cell is non-empty therefore skip it
		solveSudoku(grid, n, i, j+1);
		return;
	}

	// (i, j)th cell is an empty therefore we have to
	// assign it a digit 'd'

	for(int d=1; d<=9; d++) {
		if(canPlaceDigit(grid, n, i, j, d)) {
			grid[i][j] = d;
			solveSudoku(grid, n, i, j+1);
			grid[i][j] = 0; // backtrack
		}
	}

}

int main() {

	int n = 9;

	int grid[][9] = {{7, 8, 0, 4, 0, 0, 1, 2, 0}, 
			         {6, 0, 0, 0, 7, 5, 0, 0, 9}, 
			         {0, 0, 0, 6, 0, 1, 0, 7, 8}, 
			         {0, 0, 7, 0, 4, 0, 2, 6, 0}, 
			         {0, 0, 1, 0, 5, 0, 9, 3, 0}, 
			         {9, 0, 4, 0, 6, 0, 0, 0, 5}, 
			         {0, 7, 0, 3, 0, 0, 0, 1, 2}, 
			         {1, 2, 0, 0, 0, 7, 4, 0, 0}, 
			         {0, 4, 9, 2, 0, 6, 0, 0, 7}};

	solveSudoku(grid, n, 0, 0);

	// for(int i=0; i<n; i++) {
	// 	for(int j=0; j<n; j++) {
	// 		cout << grid[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	
	// cout << endl;

	return 0;
}

