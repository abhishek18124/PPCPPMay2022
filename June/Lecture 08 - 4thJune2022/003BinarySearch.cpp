#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(int);

	int t = 100;

	int s = 0;
	int e = n-1;

	while(s <= e) {
		int m = s+(e-s)/2; // int m = (s+e)/2;
		if(arr[m] == t) {
			// you've found the target at index m
			cout << t << " found at " << m << "th index" << endl; 
			break;
		} else if(arr[m] > t) {
			// reduce your search space from [s, e] to [s, m-1]
			e = m-1;
		} else {
			// reduce your search space from [s, e] to [m+1, e]
			s = m+1;
		}
	}

	if(s > e) {
		cout << t << " is not present!" << endl;
	}

	return 0;
}