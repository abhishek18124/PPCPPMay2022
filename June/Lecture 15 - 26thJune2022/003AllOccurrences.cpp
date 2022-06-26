#include<iostream>

using namespace std;

bool flag = false; // assume t is not present

void allOcc(int* arr, int n, int t, int i) {

	// base case

	if(i == n) {
		if(!flag) { // flag == false
			cout << -1 << " ";
		}
		return;
	}

	// recursive case

	if(arr[i] == t) {
		flag = true;
		cout << i << " ";
	}

	allOcc(arr, n, t, i+1);

}

int main() {

	int arr[] = {10, 20, 20, 30, 40};
	int n = sizeof(arr) / sizeof(int);
	int t = 20;

	allOcc(arr, n, t, 0);
	
	return 0;
}