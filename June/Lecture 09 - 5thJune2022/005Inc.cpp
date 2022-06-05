#include<iostream>

using namespace std;

void inc(int a) {
	a++;
	cout << "inside inc : a = " << a << endl;
}

int main() {

	int a = 10;

	cout << "inside main :  before inc() a = " << a << endl;

	inc(a);

	cout << "inside main :  after inc() a = " << a << endl;


}