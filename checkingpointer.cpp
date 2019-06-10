#include <iostream>
using namespace std;

int pointer(int *x) {
	*x = (*x)*2;
	return *x;
}

int pointer1(int x) {
	x = x*2;
	return x;
}

int pointer2(int& x) {
	x = x*2;
	return x;
}


int main() {
	int a = 2;
	int *b = &a;

	cout << "Call by pointer: " << pointer(b) << ". Here's the value: " << a << endl;

	cout << "Call by value: " << pointer1(a) << ". Here's the value: " << a << endl;

	cout << "Call by reference: " << pointer2(a) << ". Here's the value: " << a << endl;

}