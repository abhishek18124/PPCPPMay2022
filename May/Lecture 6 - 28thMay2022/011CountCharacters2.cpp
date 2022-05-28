#include<iostream>

using namespace std;

int main() {

	int lowerCount = 0;
	int upperCount = 0;
	int digitCount = 0;
	int speciCount = 0;
	int whiteCount = 0;

	char ch;

	while(true) {

		ch = cin.get();
		if(ch == '$') {
			break;
		}

		if(ch >= 'A' and ch <= 'Z') {
			upperCount++;
		} else if(ch >= 'a' and ch <= 'z') {
			lowerCount++;
		} else if(ch >= '0' and ch <= '9') {
			digitCount++;
		} else if(ch == ' ' || ch == '\n' || ch == '\t') {
			whiteCount++;
		} else {
			speciCount++;
		}

	}

	cout << "lowerCount : " << lowerCount << endl
	     << "upperCount : " << upperCount << endl
	     << "digitCount : " << digitCount << endl
	     << "speciCount : " << speciCount << endl
	     << "whiteCount : " << whiteCount << endl;

	return 0;
}