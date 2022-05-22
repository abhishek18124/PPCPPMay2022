#include<iostream>

using namespace std;

int main() {

	int n = 5;

	int i = 1;
	while(i <= n) {
		// print i nos. in the inc. order starting with 1
		int j = 1;
		int no = 1;
		while(j <= i) {
			cout << no;
			j++;
			no++;
		}

		i++;
		cout << endl;
	}


	return 0;
}