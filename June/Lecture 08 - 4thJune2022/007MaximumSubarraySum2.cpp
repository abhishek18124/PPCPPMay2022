#include<iostream>
#include<climits>

// constraints : n <= 100

using namespace std;

int main() {

	int arr[] = {-10, -2, -3, 5, 20};
	int n = sizeof(arr) / sizeof(int);

	int csum[101];

	csum[0] = 0;
	for(int i=1; i<=n; i++) {
		csum[i] = csum[i-1] + arr[i-1];
	}

	// for(int i=0; i<=n; i++) {
	// 	cout << csum[i] << " ";
	// }

	// cout << endl;

	int maxSum = INT_MIN;

	// iterate over all the possible starting indices
	for(int i=0; i<n; i++) {
		// iterate over all the possible ending indices
		for(int j=i; j<n; j++) {
			int sum = csum[j+1]-csum[i];
			if(sum > maxSum) {
				maxSum = sum;
			}
		}
	}

	cout << "Maximum Subarray Sum : " << maxSum << endl;
		

	return 0;

}