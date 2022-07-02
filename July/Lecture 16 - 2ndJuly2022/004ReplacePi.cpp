// n <= 10

#include<iostream>

using namespace std;

void replacePi(char* inp, int i) {

	// base case
	if(inp[i] == '\0') {
		return;
	}

	// recursive case

	if(inp[i] == 'p' and inp[i+1] == 'i') {

		// 1. shift all the characters starting from (i+2)th index
		// two steps to the right

		int j = i+2;
		while(inp[j] != '\0') {
			j++;
		}

		// int j = strlen(inp);

		while(j >= i+2) {
			inp[j+2] = inp[j];
			j--;
		}

		// 2. replace "pi" at (i, i+1)th with "3.14"

		inp[i] = '3';
		inp[i+1] = '.';
		inp[i+2] = '1';
		inp[i+3] = '4';

		// 3. ask your friend to replace all "pi"s with "3.14" 
		// in the substring that starts from the (i+4)th index
		// inp[i+4....]

		replacePi(inp, i+4);

	} else {

		// ask your friend to replace all "pi"s with "3.14" 
		// in the substring that starts from the (i+1)th index
		// inp[i+1....]

		replacePi(inp, i+1);

	}

}

int main() {

	char inp[21] = "iipip";

	replacePi(inp, 0);

	cout << inp << endl;

	return 0;
}