#include<iostream>
#include<stack>

using namespace std;

void print(stack<int> s) {

	while(!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}

	cout << endl;

}

void insertAtBottom(stack<int>& s, int data) {

	// base case
	if(s.empty()) {
		s.push(data);
		return;
	}

	// recursive case

	int x = s.top();
	s.pop();

	insertAtBottom(s, data);

	s.push(x);

}


void reverse(stack<int>& s) {

	// base case
	if(s.empty()) {
		return;
	}

	// recursive case

	// 1. save the top of the stack and then pop it
	int y = s.top();
	s.pop();

	// 2. ask your friend to reverse the resulting stack
	reverse(s);

	// 3. insert 'y' at the bottom of the stack updated by your friend
	insertAtBottom(s, y);

}

int main() {

	stack<int> s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	print(s);

	reverse(s);

	print(s);

	return 0;
}