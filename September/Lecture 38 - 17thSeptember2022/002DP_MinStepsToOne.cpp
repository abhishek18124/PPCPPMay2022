/*

Given a number n, count the minimum steps to reduce n to 1 
such that at each step you may

	reduce n to n/2 if n is divisible by 2
	or reduce n to n/3 if n is divisible by 3
	or reduce n to n-1 by decrementing n by 1

Example :
	Input : n = 10
	Output : 3

	Input : 6
	Output : 2

*/

#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int minSteps(int n) {

	// base case
	if(n == 1) {
		// count min. steps required to reduce 1 to 1
		return 0;
	}

	// recursive case 

	// count min. steps requried to reduce n to 1

	// 1. compute the min. steps required to reduce n-1 to 1 -> ask your friend
	int X = minSteps(n-1);

	// 2. compute the min. steps required to reduce n/2 to 1 -> ask your friend
	int Y = INT_MAX;
	if(n%2 == 0) {
		Y = minSteps(n/2);
	}

	// 3. compute the min. steps required to reduce n/3 to 1 -> ask your friend
	int Z = INT_MAX;
	if(n%3 == 0) {
		Z = minSteps(n/3);
	}

	return 1 + min({X, Y, Z});


}

int minStepsTopDown(int n, vector<int>& dp) {

	// lookup
	if(dp[n] != -1) {
		return dp[n];
	}

	// base case
	if(n == 1) {
		return dp[n] = 0;
	}

	// recursive case 

	// count min. steps requried to reduce n to 1

	// 1. compute the min. steps required to reduce n-1 to 1 -> ask your friend
	int X = minStepsTopDown(n-1, dp);

	// 2. compute the min. steps required to reduce n/2 to 1 -> ask your friend
	int Y = INT_MAX;
	if(n%2 == 0) {
		Y = minStepsTopDown(n/2, dp);
	}

	// 3. compute the min. steps required to reduce n/3 to 1 -> ask your friend
	int Z = INT_MAX;
	if(n%3 == 0) {
		Z = minStepsTopDown(n/3, dp);
	}

	return dp[n] = 1 + min({X, Y, Z});


}

int minStepsBottomUp(int n) {

	vector<int> dp(n+1);

	dp[1] = 0;

	for(int i=2; i<=n; i++) {
		// dp[i] -> f(i) = min. no. of steps required to reduce i to 1
		// 1. compute the min. steps required to reduce n-1 to 1 -> ask your friend
		int X = dp[i-1];

		// 2. compute the min. steps required to reduce n/2 to 1 -> ask your friend
		int Y = INT_MAX;
		if(n%2 == 0) {
			Y = dp[i/2];
		}

		// 3. compute the min. steps required to reduce n/3 to 1 -> ask your friend
		int Z = INT_MAX;
		if(n%3 == 0) {
			Z = dp[i/3];
		}

		dp[i] = 1 + min({X, Y, Z});

	}

	return dp[n];

}

int main() {

	int n = 10;

	cout << minSteps(n) << endl;

	vector<int> dp(n+1, -1);

	cout << minStepsTopDown(n, dp) << endl;

	cout << minStepsBottomUp(n) << endl;
		
	return 0;
}