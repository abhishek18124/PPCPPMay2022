#include<iostream>
#include<queue>

using namespace std;

int main() {

	char ch;

	queue<char> q;
	int freqMap[26] = {};

	while(true) {

		cin >> ch;

		if(ch == '.') {
			break;
		}

		freqMap[ch-'a']++;
		if(freqMap[ch-'a'] == 1) {
			q.push(ch);
		}

		while(!q.empty() && freqMap[q.front()-'a'] > 1) {
			q.pop();
		}

		q.empty() ? cout << "-1 " : cout << q.front() << " ";

	}

	return 0;
}