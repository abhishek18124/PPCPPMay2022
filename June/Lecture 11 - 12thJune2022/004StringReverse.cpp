#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

void reverse(char* str) {
	int i = 0;
	int j = strlen(str) - 1;
	while(i < j) {
		swap(str[i], str[j]);
		i++;
		j--;
	}
}

int main() {

	char str[] = "hello";

	cout << "Before reverse : " << str << endl;

	// reverse(str);

	// reverse(str, str+strlen(str));

	strrev(str);

	cout << "After reverse : " << str << endl;

	return 0;
}