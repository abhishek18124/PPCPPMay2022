#include<iostream>

using namespace std;

void modifyArray(int arr[]) {
	arr[0] += 100;
}

int main() {

	int arr[] = {10, 20, 30, 40, 50};

	cout << "Before func call arr[0] : " << arr[0] << endl;	
	
	modifyArray(arr);

	cout << "After func call arr[0] : " << arr[0] << endl;
	
	return 0;

}