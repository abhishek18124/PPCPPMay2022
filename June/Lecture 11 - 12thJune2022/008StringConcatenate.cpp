// constraints strlen(str1) <= 50, strlen(str2) <= 50

#include<iostream>

using namespace std;

void stringConcat(char* str1, char* str2) {

	int i = strlen(str1);
	int j = 0;

	while(str2[j] != '\0') {
		str1[i] = str2[j];
		i++;
		j++;
	}

	str1[i] = '\0';

}

int main() {

	char str1[101] = "hello";
	char str2[51] = "world";

	cout << "Before concat : " << str1 << endl;

	// stringConcat(str1, str2);
	strcat(str1, str2);

	cout << "After concat : " << str1 << endl;

	return 0;
}