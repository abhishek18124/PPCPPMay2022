#include<iostream>
#include<unordered_map>

using namespace std;

#include<iostream>
#include<unordered_map>

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

	public :

		trie() {
			root = new node('\0');
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

		string uniquePrefix(string str) {
			node* cur = root;
			string prefix = "";
			for(char ch : str) {
				cur = cur->childMap[ch];
				prefix += ch;
				if(cur->freq == 1) {
					return prefix;
				}
			}
			return cur->freq == 1 ? prefix : "";
		}
};


int main() {

	string words[] = {"code", "coder", "coding", "new", "neon"};

	trie t;
	for(string word : words) {
		t.insert(word);
	}

	for(string word : words) {
		cout << word << " : " << t.uniquePrefix(word) << endl;
	}

	return 0;
}