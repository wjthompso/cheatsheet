#include <iostream>
using namespace std;

struct quadratic {
	int a;
	int b;
	int c;
};

double evaluate(quadratic q, int x) {
	int a = q.a;
	int b = q.b;
	int c = q.c;
	double value = a*(x*x) + b*(x) + c;
	return value;
}

int main() {
	quadratic q;
	q.a = 1, q.b = 1, q.c = 1;

	cout << evaluate(q, 2) << endl;
}