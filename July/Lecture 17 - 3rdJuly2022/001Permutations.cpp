/*

Given a string (sequence of characters) of length n, generate all of its permutations. 

Example
	
	Input : inp[] = "abc"
	Output: ["abc", "acb", "bac", "bca", "cba", "cab"]

*/

#include<iostream>
#include<cstring>

using namespace std;

void generatePermutations(char* inp, int i) {

	// base case
	if(inp[i] == '\0') {
		cout << inp << endl;
		return;
	}

	// recursive case

	// you've to make a decision that which character is assigned 
	// to the ith position

	for(int j=i; j<strlen(inp); j++) {

		// let us place the character at the jth index to the ith position
		swap(inp[i], inp[j]);
		// ask your friend to take decisions for the remaining positions
		// starting from the (i+1)th position
		generatePermutations(inp, i+1);
		swap(inp[i], inp[j]); // backtracking

	}
}


int main() {

	char inp[] = "abc";

	generatePermutations(inp, 0);

	return 0;
}



