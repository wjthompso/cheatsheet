#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	int *a = new int;
	*a = 10;
	int *b = a;
	delete a;
	cout << *b << endl;
	delete b;
}