#include<iostream>

using namespace std;

void f(int a, int b=0, int c=0) {
	cout << (a+b+c) << endl;
}

int main() {

	f(10);

	f(10, 20);

	f(10, 20, 30);
	


}