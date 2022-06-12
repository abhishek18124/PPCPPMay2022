#include<iostream>
#include<cstring>

using namespace std;

void copyString(char* dst, char* src) {
	int i = 0;
	while(src[i] != '\0') {
		dst[i] = src[i];
		i++;
	}

	dst[i] = '\0';
}

int main() {

	char str1[] = "hello";
	char str2[] = "world";

	// assume len(str1) <= len(str2)

	cout << "Before copy : " << str2 << endl;

	// copyString(str2, str1);

	strcpy(str2, str1);

	cout << "After copy : " << str2 << endl;

}