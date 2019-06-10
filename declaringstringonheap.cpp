#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//

int main() {

	//DECLARING A C++ STRING ON THE HEAP
	string *word = new string;
	*word = "Heya";

	cout << "This is from a C++ string: " << *word << endl;

	char p[] = "CS16";

	char *s = new char[5];

	for (int i = 0; i < 5; i++) {
		s[i] = p[i];
		cout << *(s+i) << endl;
	}

	cout << s[0] << endl;

	//cout << "This is a C++ string: " << *s << endl;
}