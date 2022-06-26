#include<iostream>

using namespace std;

int stringToInteger(string str, int n) {

	// base case
	
	if(str == "") { // n == 0 or str.empty()
		return 0;
	}

		// if(n == 1) {
	// 	// convert the string that has a single char into integer
	// 	return str[0]-'0';
	// }

	// recursive case

	// 1. extract the subString of the given str that contains the first (n-1) characters

	string subString = str.substr(0, n-1);

	// 2. ask your friend to convert the subString into integer

	int integerFromMyFriend = stringToInteger(subString, n-1);

	return integerFromMyFriend*10 + (str[n-1]-'0');

}

int main() {

	string str = "123";
	int n = str.size();

	int x = stringToInteger(str, n);

	cout << x << " " << (x+1) << endl;

}