#include <iostream>
using namespace std;

int main() {

	char s1[5] = "Mark", s2[5] = "Jill";
	for (int i = 0; i < 5; i++)
		s1[i] = s2[i];
	cout << s1 << " " << s2;

}