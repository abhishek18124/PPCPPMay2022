#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class customer {

public:

	int age;
	string name; 
	
	customer(string name, int age) {
		this->age = age;
		this->name = name;
	}	
};

bool myComparator(customer c1, customer c2) {
	// return c1.age < c2.age; // inc. order acc. to age
	return c1.name < c2.name; // inc. order acc. to name
}

int main() {

	vector<customer> v;

	customer c1("Tanishq", 21);
	customer c2("Vishal", 19);
	customer c3("Samriddhi", 22);
	customer c4("Aishnee", 18);
	customer c5("Aman", 20);

	v.push_back(c1);
	v.push_back(c2);
	v.push_back(c3);
	v.push_back(c4);
	v.push_back(c5);

	for(auto x : v) {
		cout << x.name << " " << x.age <<  endl;
	}

	cout << endl;

	sort(v.begin(), v.end(), myComparator);

	for(auto x : v) {
		cout << x.name << " " << x.age << endl;
	}

	return 0;
}