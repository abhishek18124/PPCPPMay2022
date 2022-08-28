
#include<iostream>
#include<queue>

using namespace std;

string reOrganise(string str) {

    priority_queue<pair<int, char>> maxHeap;

    int freq[26] = {};

    for(int i=0; i<str.size(); i++) {
        char ch = str[i];
        freq[ch-'a']++;
    }

    for(int i=0; i<26; i++) {
        if(freq[i] > 0) {
            // ith char in part of the string
            maxHeap.push({freq[i], i+'a'}); // or make_pair(freq[i], i+'a')
        }
    }

    string out = "";

    while(!maxHeap.empty()) {
        if(maxHeap.size() == 1) {
            pair<int, char> p_max = maxHeap.top(); maxHeap.pop();
            if(p_max.first == 1) {
                out += p_max.second;
            } else {
                out = "";
            }
        } else {
            pair<int, char> p_max1 = maxHeap.top(); maxHeap.pop();
            out += p_max1.second;
            p_max1.first--;
            
            pair<int, char> p_max2 = maxHeap.top(); maxHeap.pop();
            out += p_max2.second;
            p_max2.first--;

            if(p_max1.first > 0) maxHeap.push(p_max1);
            if(p_max2.first > 0) maxHeap.push(p_max2);
            
        }
    }

    return out;

}

int main() {

    string str = "aaaaccbbb";

    cout << reOrganise(str) << endl;

    return 0;
}