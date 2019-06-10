#include <iostream>
using namespace std;

int main() {

	cout << "Here is the first proposed infinite loop: " << endl;

	int i = 0;

	if (true)
		cout << i++;

	cout << endl;

	cout << "Here is the second proposed infinite loop: " << endl;

	i = 0;

	while (i < 5)
		cout << i--;
}