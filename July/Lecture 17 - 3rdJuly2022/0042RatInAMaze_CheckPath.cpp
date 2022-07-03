/*

Given a m x n maze with some blocked cells (marked with 'X'), and rat that wants to
go from the src (0, 0) to the dst (m-1, n-1) design a recursive algorithm to
	
	> check if there exists a path from src to dst

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

		true (Yes, a path exist from src to dst)

*/

#include<iostream>

using namespace std;

bool doesPathExist(char maze[][10], int i, int j) {

	// base case
	if(i == 0 and j == 0) {
		// can you reach the (0, 0)th cell from (0, 0)th cell ? Yes
		return true;
	}

	if(i < 0 || j < 0) {
		return false;
	}

	// recursive case

	if(maze[i][j] == 'X') {
		// can you reach a blocked cell ? No
		return false;
	}

	// ask your friend to check if there exists a path to the (i, j-1)th
	// cell and (i-1, j)th cell from the (0, 0)th cell

	return doesPathExist(maze, i, j-1) || doesPathExist(maze, i-1, j);

}

int main() {

	char maze[][10] = {"0000",
	                   "00X0",
	                   "000X",
	                   "0XX0"};
	int m = 4;
	int n = 4;

	doesPathExist(maze, m-1, n-1) ? cout << "true" << endl :
	                                cout << "false" << endl;

	return 0;
}


