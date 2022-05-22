#include<iostream>

using namespace std;

int main() {

	int no;
	int count = 0;

	while(true) {

		cin >> no;
		if(no == -1) {
			break;
		}
		count++;

	}

	cout << "count : " << count << endl;

	return 0;
}