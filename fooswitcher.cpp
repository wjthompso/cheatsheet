#include <iostream>
using namespace std;

void foo(int &a, int &b) {
	int *p1, *p2, *p3;
	p1 = new int;
	p2 = new int;
	p3 = new int;
	p3 = p1;
	*p1 = a;
	*p2 = *p1 + b;
	b = a + 10;

	cout << *p1 << " " << *p2 << " " << *p3 << endl;
	p1 = p2;
	cout << *p1 << " " << *p2 << " " << *p3 << endl;
	*p3 = *p2;
	cout << *p1 << " " << *p2 << " " << *p3 << endl;
}

int main() {
	int x = 10, y = 20;
	foo(x,y);
	cout << x << " " << y << endl;
	return 0;
}