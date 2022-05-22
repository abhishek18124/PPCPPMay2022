#include<iostream>

using namespace std;

int main() {

	int n = 5;

	int i = 1;
	while(i <= n) {

		// print (n-i) spaces
		int j=1;
		while(j <= n-i) {
			cout << " ";
			j++;
		}

		// print i nos. in the inc. order starting with i
		j = 1;
		int no = i;
		while(j <= i) {
			cout << no;
			no++;
			j++;
		}

		// print (i-1) nos. in the dec. order starting with 2i-2
		
		// no = 2*i - 2;
		no = no-2;
		j = 1;
		while(j <= i-1) {
			cout << no;
			no--;
			j++;
		}

		i++;
		cout << endl;
		

	}

	return 0;
}