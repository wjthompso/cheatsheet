#include <iostream>
using namespace std;

int main() {

	int s = 1;

	cout << "This is the result when the incrementer goes after: s++" << endl;

	do {
		cout << "s is equal to: " << s << endl;
	} while (s++ <= 5);

	cout << "This is the result when the incrementer goes before: ++s" << endl;

	s = 1;
	do {
		cout << "s is equal to: " << s << endl;
	} while (++s <= 5);
		
	cout << "The lesson is: " << endl;
	cout << "(++s <= 5) increments s and then evaluates the expression." << endl;
	cout << "(s++ <= 5) evaluates the expression and then increments s." << endl;

}

