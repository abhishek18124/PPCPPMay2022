#include<iostream>
#include<climits>

using namespace std;

int main() {

	int A[] = {-10, -20, 1, 2, 3};
	int n = sizeof(A) / sizeof(int);

	int fL = INT_MIN;
	int sL = INT_MIN;
	int tL = INT_MIN;

	int fS = INT_MAX;
	int sS = INT_MAX;

	for(int i=0; i<n; i++) {

		if(A[i] > fL) {
			tL = sL;
			sL = fL;
			fL = A[i];
		} else if(A[i] > sL) {
			tL = sL;
			sL = A[i];
		} else if(A[i] > tL) {
			tL = A[i];
		}

		if(A[i] < fS) {
			sS = fS;
			fS = A[i];
		} else if(A[i] < sS) {
			sS = A[i];
		}

	}


	// int p1 = fL * sL * tL;
	// int p2 = fS * sS * fL;

	// cout << max(p1, p2) << endl;

	cout << max(fL*sL*tL, fS*sS*fL) << endl;

	// cout << max({1, 2, 3, 4, 5}) << endl;

	// cout << max(1, max(2, max(3, max(4, 5)))) << endl;

	return 0;
}