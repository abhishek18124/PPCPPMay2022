#include<iostream>
#include<cstring>

using namespace std;

int stringCompare(char* str1, char* str2) {
	int i = 0;
	int j = 0;

	int m = strlen(str1);
	int n = strlen(str2);

	while(i < m and j < n) {
		if(str1[i] > str2[j]) {
			// str1 > str2
			return 1;
		} else if(str1[i] < str2[j]) {
			// str1 < str2
			return -1;
		}
		i++;
		j++;
	}

	if(m > n) {
		// str1 > str2
		return 1;
	} else if(m < n) {
		// str1 < str2
		return -1;
	} else {
		// str is equal str2
		return 0;
	}

}

int main() {

	char str1[] = "abc";
	char str2[] = "abc";

	// int out = stringCompare(str1, str2);

	int out = strcmp(str1, str2);

	if(out == 0) {
		cout << str1 << " is equal to " << str2 << endl;
	} else if(out > 0) {
		cout << str1 << " is greater than " << str2 << endl;
	} else {
		cout << str1 << " is less than " << str2 << endl;
	}

	return 0;
}