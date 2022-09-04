#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int longestPalindrome(string str) {

	int cnt = 0;
	unordered_set<char> seen;

	for(char ch : str) {

		if(seen.find(ch) != seen.end()) {
			// you've seen ch before
			cnt += 2;
			seen.erase(ch);
		} else {
			seen.insert(ch);
		}

	}

	return seen.empty() ? cnt : cnt+1;

}

int main() {

	string str = "abccccdd";

	cout << longestPalindrome(str) << endl;
	
	return 0;
}