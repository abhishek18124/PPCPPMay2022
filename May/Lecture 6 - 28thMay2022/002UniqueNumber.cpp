#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	int ans = 0;
	int i = 0;
	int x;
	
	while(i < n) {
		cout << "Enter a number : ";
		cin >> x;
		ans = ans ^ x;
		i++;
	}

	cout << "unique number : " << ans << endl;


	return 0;
}