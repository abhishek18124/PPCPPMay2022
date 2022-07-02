#include<iostream>

using namespace std;

string move(string str) {

	// base case
	if(str == "") { // str.empty() or str.size() == 0
		return str;
	}

	// recursive case

	// 1. extract the substr that starts from the 1st index
	string subString = str.substr(1);

	// 2. ask your friend to move all the 'x' char in the subString to the end
	string ansFromMyFriend = move(subString);

	// 3. extract the character at the 0th index
	
	// char ch = str[0];

	string ch = str.substr(0, 1);

	// string ch = string(1, str[0]);

	if(ch == "x") {
		return ansFromMyFriend + ch;
	} 
		
	return ch + ansFromMyFriend;
	


}

int main() {

	string str = "xbxaxd";

	cout << move(str) << endl;

	return 0;
}