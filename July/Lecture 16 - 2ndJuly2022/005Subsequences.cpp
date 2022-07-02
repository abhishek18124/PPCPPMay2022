// n <= 9

#include<iostream>
#include<set>

using namespace std;

void generateSubsequences(char* inp, char* out, int i, int j, set<string>& s) {

	// base case
	if(inp[i] == '\0') {
		out[j] = '\0';
		s.insert(string(out));
		// cout << out << endl;
		return;
	}

	// recursive case

	// make a decision for the char. at the ith index

	// 1. include the char. at the ith index into the out. subseq.
	out[j] = inp[i];
	generateSubsequences(inp, out, i+1, j+1, s);

	// 2. exclude the char. at the ith index from the out. subseq.
	generateSubsequences(inp, out, i+1, j, s);

}

int main() {

	char inp[] = "abc";
	char out[10];

	set<string> s;

	generateSubsequences(inp, out, 0, 0, s);

	for(string str : s) {
		cout << str << endl;
	}

	cout << endl;

	return 0;
}