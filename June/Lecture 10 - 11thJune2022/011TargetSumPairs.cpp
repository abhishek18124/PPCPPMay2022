#include<iostream>

using namespace std;

int countPairs(int* arr, int n, int t) {
	int count = 0;
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(arr[i]+arr[j] == t) {
				cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
				count++;
			}
		}
	}
	return count;
}

int main() {	

	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);
	int t = 6;

	cout << countPairs(arr, n, t) << endl;

	return 0;
}