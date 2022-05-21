#include<iostream>

using namespace std;

int  main() {

	char ch;
	cout << "Enter a character : ";
	cin >> ch;

	if(ch >= 'A' and ch <= 'Z') {
		cout << ch << " is an uppercase-alphabet" << endl;
	} else if(ch >= 'a' and ch <= 'z') {
		cout << ch << " is a lower-case alphabet" << endl;
	} else if(ch >= '0' and ch <= '9') {
		cout << ch << " is a digit" << endl;
	} else {
		cout << ch << " is a special symbol" << endl;
	}

	


	return 0;
}