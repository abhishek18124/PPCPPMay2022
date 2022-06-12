// constraints : len(str) <= 100

#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char str[101];

	cout << "Enter a string : ";
	cin.getline(str, 101);

	// int i = 0;
	// while(str[i] != '\0') {
	// 	i++;
	// }

	// cout << "Length of the string : " << i << endl;

	cout << "Length of the string : " << strlen(str) << endl;

	return 0;
}