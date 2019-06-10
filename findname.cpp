#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//OR bool findName(stringb[], string name, int len)

bool findName(string *b /*OR b[]*/, string name, int len) {
	for (int i = 0; i < len; i++) {
		if (b[i] == name)
			return true;
	}
	return false;

}

int main() {
	string b[5] = {"Momma","Dadda","Dolphin","Seahorse","Dragon"};
	//string b = "Momma";
	cout << findName(b, "Dadda", 5) << endl;
}