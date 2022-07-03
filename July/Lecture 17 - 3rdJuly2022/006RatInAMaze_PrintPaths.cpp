/*

Given a m x n maze with some blocked cells (marked with 'X'), and rat that wants to
go from the src (0, 0) to the dst (m-1, n-1) design a recursive algorithm to
	
	> generate all the paths from src to dst

such at each step the rat can only move in the right or down direction.

Constraint 

 1 <= m, n < 10

Example 
	Input : 

		maze = {"0000",
	            "00X0",
	            "000X",
	            "0X00"}
	
	Output :

	       {"1100", {"1000", {"1000",
            "0100",	 "1100",  "1000",
            "0110",  "0110",  "1110",
            "0011"}  "0011"}  "0011"}

*/

#include<iostream>

using namespace std;

int m = 4;
int n = 4;

void printPaths(char maze[][10], char soln[][10], int i, int j) {

	if(i == 0 and j == 0) {
		soln[i][j] = '1';
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				cout << soln[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		soln[i][j] = '0';
		return;
	}

	if(i < 0 or j < 0) {
		return;
	}

	if(maze[i][j] == 'X') {
		return;
	}

	soln[i][j] = '1';
	printPaths(maze, soln, i, j-1);
	// soln[i][j] = '0';

	// soln[i][j] = '1';
	printPaths(maze, soln, i-1, j);
	soln[i][j] = '0'; // backtrack


}

int main() {

	char maze[][10]  = {"0000",
				        "00X0",
			            "000X",
			            "0X00"};

	char soln[][10] = {"0000",
	                   "0000",
	                   "0000",
	                   "0000"};

	printPaths(maze, soln, m-1, n-1);

	return 0;
}


