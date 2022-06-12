#include<iostream>

using namespace std;

void readString(char* str, char dlim='\n') {

	char ch;
	int i = 0;
	while(true) {

		ch = cin.get();
		if(ch == dlim) {
			break;
		}
		str[i] = ch;
		i++;
	}

	str[i] = '\0'; 

}

int main() {

	char str[10];

	cout << "Enter a string : ";
	// cin >> str;
	// readString(str, '$');
	cin.getline(str, 3, '$');

	cout << "You've entered : " << str << endl;
	
	return 0;
}