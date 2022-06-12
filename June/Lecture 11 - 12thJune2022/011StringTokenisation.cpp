#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char inp[] = "abc.def.ghi.jkl";
	char dlim[] = ".";

	char* token = (char*)strtok(inp, dlim); 
	// cout << token << endl;

	// token = (char *)strtok(NULL, dlim);
	// cout << token << endl;

	// token = (char *)strtok(NULL, dlim);
	// cout << token << endl;

	// token = (char *)strtok(NULL, dlim);
	// cout << token << endl;

	while(token != NULL) {
		cout << token << endl;
		token = (char *)strtok(NULL, dlim);
	}


	return 0;
}