#include<iostream>

using namespace std;

int main() {

	int x = 10;

	cout << &x << endl;
	cout << sizeof(&x) << "B" << endl;

	float y = 10.28;

	cout << &y << endl;
	cout << sizeof(&y) << "B" << endl;

	double z = 12.72;

	cout << &z << endl;
	cout << sizeof(&z) << "B" << endl;

	char ch = 'A';

	cout << &ch << endl;
	cout << sizeof(&ch) << "B" << endl;

	return 0;

}