#include<iostream>
#include<climits>

using namespace std;

int main() {

	int largest = INT_MIN;

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	int no;
	int i = 1;
	while(i <= n) {
		cout << "Enter the " << i << "th number : ";
		cin >> no;
		if(no > largest) {
			largest = no;
		}
		i = i+1;
	}

	cout << "The largest number is : " << largest << endl;

	return 0;
}