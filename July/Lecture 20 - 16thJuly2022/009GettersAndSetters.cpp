#include<iostream>

using namespace std;

class customer {

	private :

		int age;

	public :
		char name[100];
		char gender;
		double credits;

		customer() {
			cout << "I am inside the default constructor" << endl;
		}

		customer(char* n, int a, char g, double c) {
			cout << "I am inside the parameterised constructor of the customer class" << endl;
			strcpy(name, n);
			age = a;
			gender = g;
			credits = c;
		}

		void printCustomerInfo() {
			cout << "\nCustomer Information\n";
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
			cout << "Credits : " << credits << endl;
		}

		int getAge() {
			return age;
		}

		void setAge(int a) {
			age = a;
		}



};

int main() {

	customer c1("Tanishq", 20, 'M', 0); 

	cout << "c1.age = " << c1.getAge() << endl;
	// cout << "c1.age = " << c1.age << endl;

	c1.setAge(22);

	cout << "c1.age = " << c1.getAge() << endl;
		
	return 0;
}

