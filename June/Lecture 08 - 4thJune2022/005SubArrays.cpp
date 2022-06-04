#include<iostream>

using namespace std;

int main() {

	int arr[] = {-10, 2, 3, 5, -20};
	int n = sizeof(arr) / sizeof(int);

	// iterate over all the possible starting indices
	for(int i=0; i<n; i++) {
		// iterate over all the possible ending indices
		for(int j=i; j<n; j++) {
			// cout << i << " " << j << endl;
			for(int k=i; k<=j; k++) {
				cout << arr[k] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;

}