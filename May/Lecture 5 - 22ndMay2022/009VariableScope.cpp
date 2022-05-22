#include<iostream>

using namespace std;

int x = 100;

int main() {

	cout << x << endl;

	int x = 10;
	cout << x << endl;
	cout << ::x << endl;

	::x = ::x + 1;
	cout << ::x << endl;

	{
		int y = 20;
		cout << x << " " << y << endl;

		{
		
			int y = 40;
			int z = 30;

			cout << x << " " << y << " " << z << endl;

		}
	}


	return 0;
}