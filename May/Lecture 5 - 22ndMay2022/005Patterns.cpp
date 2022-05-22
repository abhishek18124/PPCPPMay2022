#include<iostream>

using namespace std;

int main() {

	int n = 5;

	int i = 1;
	while(i <= n) {

		// print i nos. in the ith row

		int no;
		if(i%2 == 0) {
			// ith row is even
			no = 0;
		} else {
			// ith row is odd
			no = 1;
		}

		int j = 1;
		while(j <= i) {
			cout << no << " ";
			j++;
			no = 1-no;
		}
		

	}

	return 0;
}