#include<iostream>

using namespace std;

void inc(int& b) {
	b++;
	cout << "inside inc : b = " << b << endl;
}

int main() {

	int a = 10;

	cout << "inside main :  before inc() a = " << a << endl;

	inc(a);

	cout << "inside main :  after inc() a = " << a << endl;


}