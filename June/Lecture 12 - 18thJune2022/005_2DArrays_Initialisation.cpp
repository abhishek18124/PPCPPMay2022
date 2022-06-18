#include<iostream>

using namespace std;

void print2DArray(int A[][4], int m, int n) {
	for(int i=0; i<m; i++) {
    	for(int j=0; j<n; j++) {
    		cout << A[i][j] << " ";
    	}
    	cout << endl;
    }
    cout << endl;
}

int main() {

	int A[][4] = {{0, 1, 2, 3},
                   {4, 5, 6, 7},
                   {8, 9}}; // rows are optional, columns is mandatory


	// int A[3][4] = {}; 

    // for(int i=0; i<3; i++) {
    // 	for(int j=0; j<4; j++) {
    // 		cout << A[i][j] << " ";
    // 	}
    // 	cout << endl;
    // }
    // cout << endl;

    print2DArray(A, 3, 4);

	return 0;
}