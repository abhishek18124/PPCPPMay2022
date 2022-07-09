/*

N Queens Problem

The problem is to place 'n' queens on an 'n x n' chessboard, so that no two queens are attacking 
each other, this means that no two queens are in the same row, the same column, or the same diagonal.

Example 
	Input : N = 4
	Output: 
			_ Q _ _	     _ _ Q _
	        _ _ _ Q      Q _ _ _ 
	        Q _ _ _      _ _ _ Q
	        _ _ Q _      _ Q _ _ 

	        [1, 3, 0, 2] [2, 0, 3, 1]

Constraint:
	1<=n<=10	        

*/

#include<iostream>

using namespace std;

void nQueens(int n, int r, int* pos) {

	// base case
	if(r == n) {
		// you've placed all the 'n' queens
		
		// for(int i=0; i<n; i++) {
		// 	cout << pos[i] << " ";
		// }
		// cout << endl;

		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				if(pos[i] == j) {
					cout << " Q ";
				} else {
					cout << " _ ";
				}
			}
			cout << endl;
		}
		cout << endl;

		return;
	}


	// recursive case

	// you've to make a decision that in which column
	// of row 'r' we place 'Qr'

	// in general, you can place 'Qr' in the jth column
	// of row 'r' where 0<=j<n iff upon place the Qr
	// in the jth column of row 'r' it doesn't attack
	// any previously place queen Qi where 0<=i<=r-1

	for(int j=0; j<n; j++) {
		bool canPlace = true;

		for(int i=0; i<=r-1; i++) {
			if(pos[i] == j || pos[i] == j-(r-i) || pos[i] == j+(r-i)) {
				canPlace = false;
				break;
			}

		}

		if(canPlace) {
			pos[r] = j;
			nQueens(n, r+1, pos);
		}
	}

}


int main() {

	int n = 4;
	int pos[10];

	nQueens(n, 0, pos);

	return 0;
}



