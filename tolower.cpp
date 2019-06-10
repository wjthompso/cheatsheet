#include <iostream>
using namespace std;

char* tolower(const char *c) {
	char *a =  new char[strlen(c)];

	for (int i = 0; i < strlen(c); i++) {
		a[i] = tolower(c[i]);
	}

	//a[strlen(c)] = "\0";
	return a;
}

int main() {
	char *b = "WSDAkeys";

	int arr[] = {1,2,3,4,5};

	cout << arr << endl;
	cout << *arr << endl;
	cout << "Did not dereference for cout: " << b << endl;		//prints the whole string
	cout << "Did derefernce for cout: " << *b << endl;		//prints the 1st character, because b is a pointer to the 1st character, and we are dereferencing b
	cout << tolower(b) << endl;

	return 0;
}

// If we use cout and dereference (* charvariable) for cout, then cout will only print the first character of the c-string
// If we use cout and don't dereference for cout (charvariable), then cout will automatically both dereference and then iterate through the c-string