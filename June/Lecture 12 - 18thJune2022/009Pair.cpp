#include<iostream>

using namespace std;

int main() {

	pair<int, int> p;

	// p = make_pair(1, 2);

	// p = {1, 2};

	p.first = 1;
	p.second = 2;

	cout << "p.first : " << p.first 
		 << " p.second : " << p.second << endl;


    pair<int, string> p2 = make_pair(1, "hello");
    cout << p2.first << " " << p2.second << endl;

    pair< pair<int, int>, string > p3 = {{1, 2}, "world"};
    cout << p3.first.first << " " << p3.first.second << " " << p3.second << endl;
 
	return 0;
}