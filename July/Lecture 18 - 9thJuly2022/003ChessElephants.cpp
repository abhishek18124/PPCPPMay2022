/*

Given a n x n chess board, count the number of ways a chess elephant can move from (0, 0)
to (n-1, n-1) such that it can only move in the right or down direction at a time.

Example 
	Input : n = 2
	Output: 2
	
	Input : n = 3
	Output: 14
	
	Input : n = 4
	Output: 106

*/

#include<iostream>

using namespace std;

int countWays(int i, int j) {

	// base case
	if(i == 0 and j == 0) {
		return 1;
	}

	// recursive case

	int c1 = 0;
	for(int k=1; k<=i; k++) {
		c1 += countWays(i-k, j);
	}

	int c2 = 0;
	for(int k=1; k<=j; k++) {
		c2 += countWays(i, j-k);
	}

	return c1+c2;



}

int main() {

	int n = 2;

	cout << countWays(n-1, n-1) << endl;

	return 0;
}

