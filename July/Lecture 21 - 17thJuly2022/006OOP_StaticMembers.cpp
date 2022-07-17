#include<iostream>

using namespace std;

class customer {

	public :

		string name;
		int age;
		char gender;
		double credits;
		static int count; // class data member i.e. shared by all the objects

		customer() {
			cout << "\ninside default constructor of \'customer\' class\n";
			count++;
		}

		customer(string name, int age, char gender, double credits) {
			cout << "\ninside parameterised constructor of \'customer\' class\n";
			this->name = name;
			this->age = age;
			this->gender = gender;
			this->credits = credits;
			count++;
		}

		void printCustomerInfo() {
			cout << "\nCustomer Information\n";
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
			cout << "Credits : " << credits << endl;
		}

		// static member fn can access only static data members
		static int getObjectCount() {
			return count;
		}

};

int customer::count = 0;

int main() {

	customer c1("Vishal", 20, 'M', 100);
	customer c2("Aman", 20, 'M', 0);
	customer c3("Lakshit", 21, 'M', 1000);

	cout << "count = " << customer::count << endl << endl;
	cout << "count = " << c1.count << endl;
	cout << "count = " << c2.count << endl;
	cout << "count = " << c3.count << endl;

	cout << "count = " << customer::getObjectCount() << endl;
	cout << "count = " << c1.getObjectCount() << endl;
	cout << "count = " << c2.getObjectCount() << endl;
	cout << "count = " << c3.getObjectCount() << endl;
	
	return 0;
}
