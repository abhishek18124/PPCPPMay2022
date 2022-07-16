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

		bool operator==(customer c) {
			return age == c.age and 
			       gender == c.gender and 
			       credits == c.credits and 
			       strcmp(name, c.name) == 0;
		}

};

int main() {

	customer c1("Tanishq", 20, 'M', 0); 
	customer c2("Tanishqq", 20, 'M', 0); 

	if(c1 == c2) { // c1.operator==(c2)
		cout << "same customer" << endl;
	} else {
		cout << "different customer" << endl;
	}
		
	return 0;
}

