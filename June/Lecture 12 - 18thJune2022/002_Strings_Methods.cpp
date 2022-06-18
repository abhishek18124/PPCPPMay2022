#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	string str = "coding blocks";

	cout << str.length() << endl;
	cout << str.size() << endl;

	string str1 = "hello";
	string str2 = "world";

	// str1.append(str2);
	str1 = str1 + str2;

	cout << str1 << endl;

	cout << str1.compare(str1) << endl;

	if(str1 > str2) {
		cout << str1 << " is greater than " << str2 << endl;
	} else {
		cout << str2 << " is greater than " << str1 << endl;
	}

	string str3 = "coding blocks";

	cout << str3.substr(2) << endl;
	cout << str3.substr(2, 3) << endl;

	string str4 = "ababaa";

	cout << str4.find("ba") << endl;
	cout << str4.rfind("ba") << endl;
	cout << str4.find("cd") << endl;
	cout << string::npos << endl;

	if(str4.find("cc") == string::npos) {
		cout << "substr not found!" << endl;
	} else {
		cout << "substr found!" << endl;
	}

	string str5 = "hello";

	reverse(str5.begin(), str5.end());

	cout << str5 << endl;

	char* cptr = (char*)str5.c_str();
  	
  	cout << cptr << endl;

  	char arr[] = "world";

  	string str6(arr);

  	cout << str6 << endl;
   	
	return 0;
}