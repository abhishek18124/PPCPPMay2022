#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int n = 36;

	int count = 0;

	for(int k=0; k<log2(n+1); k++) {

		// extract and check if the kth bit of n is set
		if((n>>k) & 1) {
			count++;
		}
	}

	cout << "Number of set bits : " << count << endl;

	return 0;
}