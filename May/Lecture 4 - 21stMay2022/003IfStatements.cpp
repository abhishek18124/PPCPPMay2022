#include<iostream>

using namespace std;

int main() {

	int age;
	cout << "Enter your age : ";
	cin >> age;

	if(age >= 18) {
		cout << "You are eligible for voting" << endl;
	}

	return 0;
}