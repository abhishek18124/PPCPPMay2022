#include<iostream>

using namespace std;

void f() {

	static int i = 0;
	i++;
	cout << "i : " << i << endl;

}

int main() {

	f();
	f();
	f();

	return 0;
}