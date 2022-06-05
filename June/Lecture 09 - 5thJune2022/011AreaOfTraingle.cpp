#include<iostream>
#include<cmath>

using namespace std;

double areaOfTriangle(int b, int h) {
	return 0.5 * b * h;
}

double semiperimeter(int a, int b, int c) {
	return 0.5 * (a+b+c);
}

double areaOfTriangle(int a, int b, int c) {
	double s = semiperimeter(a, b, c);
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main() {

	cout << areaOfTriangle(4, 5) << endl;
	cout << areaOfTriangle(3, 4, 5) << endl;

	return 0;
}