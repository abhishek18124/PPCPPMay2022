#include<iostream>

using namespace std;

int main() {

	int marks;
	cout << "Enter your marks : ";
	cin >> marks;

	if(marks > 90) {
		cout << "Your grade is A" << endl;
	} else if(marks > 80 and marks <= 90) {
		cout << "Your grade is B" << endl;
	} else if(marks > 70 and marks <= 80) {
		cout << "Your grade is C" << endl;
	} else if(marks > 60) {
		cout << "Your grade is D" << endl;
	} else {
		cout << "Your grade is F" << endl;
	}


	return 0;
}