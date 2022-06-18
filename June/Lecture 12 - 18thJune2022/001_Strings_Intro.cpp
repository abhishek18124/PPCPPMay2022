#include<iostream>

using namespace std;

int main() {

	string str;

	str = "hello";

	cout << str << endl;

	cout << str[0] << endl;
	cout << str[1] << endl;

	string str2 = "coding blocks"; // string str2("coding blocks");

	cout << str2 << endl;

	string str3 = str2; // string str3(str2);

	cout << str3 << endl;

	string str4;

	str4 = str2;

	cout << str4 << endl;

	string str5;

	// cin >> str5;

	getline(cin, str5, '$'); // '\n' is the default delimiting char.
 
	cout << "You've entered : " <<  str5 << endl;
	
	return 0;
}

