#include<iostream>
#include<unordered_map>
#include<map>

using namespace std;

class node {

	public :

		char ch;
		bool terminal;
		unordered_map<char, node*> childMap;
		int freq;

		node(char ch) {
			this->ch = ch;
			this->terminal = false;
			this->freq = 0;
		}

};

class trie {
	node* root;
	int n; // size of the trie

	public :

		trie() {
			root = new node('\0');
			n = 0;
		}

		void insert(string str) {
			node* cur = root;
			for(char ch : str) {
				if(cur->childMap.find(ch) == cur->childMap.end()) {
					 // cur node doesn't have a child node whose data matches ch
					cur->childMap[ch] = new node(ch);
				}
				cur = cur->childMap[ch];
				cur->freq++;
			}
			cur->terminal = true;
			n++;
		}

		bool search(string str) {
			node* cur = root;
			for(char ch : str) {
				if(cur->childMap.find(ch) == cur->childMap.end()) {
					// cur node doesn't have a child node whose data matches 'ch'
					return false;
				}
				cur = cur->childMap[ch];
			}
			return cur->terminal;
		}

		string longestCommonPrefix() {
			node* cur = root;
			string prefix = "";
			while(cur->childMap.size() > 0) {
				cur = cur->childMap.begin()->second;
				if(cur->freq != n) break;
				prefix += cur->ch;
			}
			return prefix;
		}
};



int main() {

	string words[] = {"flow", "floor", "fly"};

	trie t;
	for(string word : words) {
		t.insert(word);
	}

	cout << t.longestCommonPrefix() << endl;

	return 0;
}