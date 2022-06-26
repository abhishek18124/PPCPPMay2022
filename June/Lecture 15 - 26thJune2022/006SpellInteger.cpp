#include<iostream>

using namespace std;

string digitMap[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void spellInteger(int n) {

	// base case
	if(n == 0){
		return;
	}

	// recurisve case

	int d = n%10;
	spellInteger(n/10);
	cout << digitMap[d] << " ";

}

int main() {
	
	int n = 1;

	spellInteger(n);

	return 0;
}