// assume strlen(inp) <= 9

#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	cin.ignore();
	// cin.get();

	char inp[10];
	cin.getline(inp, 10);

	char out[10];
	strcpy(out, inp);

	int i = 1;
	while(i < n) {
		// read the next string
		cin.getline(inp, 10);
		if(strcmp(inp, out) > 0) {
			strcpy(out, inp);
		}
		i++;
	}

	cout << "Largest of n strings : " << out << endl;

	return 0;
}