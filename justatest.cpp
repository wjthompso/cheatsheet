#include <iostream>
using namespace std;

int main() {
	string s1 = "apple", s2 = "grape";
	for (int i = 0; i < 5; i++) {
		s1[i] = s2[5-i-1];
	}
	cout << s1 << " " << s2 << endl;

	return 0;
}