#include <iostream>
using namespace std;

int main() {

	for (int i = 0; i < 5; i++) {
		if (i % 2) cout << i << " ";
	}
	cout << endl;

	cout << "Confused? Here's why: " << endl;
	cout << "Here's what (0 % 2) evaluates to: " << 0%2 << endl;
	cout << "Here's what (1 % 2) evaluates to: " << 1%2 << endl;
	cout << "And False evaluates to 0, look: " << false << endl;
}