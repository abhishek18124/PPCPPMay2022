#include<iostream>

using namespace std;

void generatePairs(int* arr, int n) {

	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			cout << "(" << arr[i] << ", " << arr[j] << ")\n";
		}
		cout << endl;
	}

}

int main() {	

	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);

	generatePairs(arr, n);

	return 0;
}