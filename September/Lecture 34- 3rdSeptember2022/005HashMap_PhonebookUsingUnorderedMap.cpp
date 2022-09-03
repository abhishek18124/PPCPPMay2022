/*

	Implement a phonebook storing mapping between person's name and 
	their phone numbers using an unordered_map.

*/

#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main() {

	unordered_map<string, vector<string>> phonebook;

	phonebook["Aman"].push_back("1234");
	phonebook["Aman"].push_back("5678");

	phonebook["Mayank"].push_back("9999");
	phonebook["Vishal"].push_back("0000");

	for(pair<string, vector<string>> p : phonebook) {
		cout << p.first << " ";
		for(string num : p.second) {
			cout << num << " ";
		}
		cout << endl;
	}

	return 0;
}