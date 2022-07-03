/*

Given a phone keypad as shown below, and an n digit number, print all words 
which are possible by pressing the n digits on the keypad.
 1()     2(abc) 3(def) 
 4(ghi)  5(jkl) 6(mno)
 7(pqrs) 8(tuv) 9(wxyz)

 n <= 9

*/

#include<iostream>

using namespace std;

string keypad[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void generateWords(char* inp, char* out, int i, int j) {

    // base case
    if(inp[i] == '\0') {
        out[j] = '\0';
        cout << out << endl;
        return;
    }

    // recursive case

    // decide the character to which we map the digit at the ith index

    int d = (inp[i]-'0');

    if(d == 0 || d == 1) {
        // skip the digit
        generateWords(inp, out, i+1, j);
        return;
    }

    string options = keypad[d];
    for(char c_k : options) {
        out[j] = c_k;
        generateWords(inp, out, i+1, j+1);
    }

}

int main() {
	
    char inp[] = "213";
    char out[10];

    generateWords(inp, out, 0, 0);

	return 0;
}
