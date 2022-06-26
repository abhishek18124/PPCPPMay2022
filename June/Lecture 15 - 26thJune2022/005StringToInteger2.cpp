#include<iostream>
#include<cstring>

using namespace std;

int stringToInteger(char* str, int i) {

	// base case
	if(i == 0) {
		return str[i]-'0';
	}

	// recursive case

	return stringToInteger(str, i-1)*10 + (str[i]-'0');
}

int main() {

	char str[] = "123";
	int n = strlen(str);

	int x = stringToInteger(str, n-1);

	cout << x << " " << (x+1) << endl;

	return 0;
}