#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int countCharInString1(char* str, char value) {
	// Check to make sure string is not NULL
	// Go through each character in the string to make sure that it is maybe or maybe nor the value
	// Do that recursively, by sum
	int sum = 0;
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (tolower(str[i]) == value) {
			sum ++;
		}
	}
	return sum;
}

int countCharInString(char* str, char value) {
	// Check to make sure string is not NULL
	// Go through each character in the string to make sure that it is maybe or maybe nor the value
	// Do that recursively, by sum
	if (*str == '\0') {
		return 0;
	}
	cout << str << endl;
	int sum = (tolower(*str) == value) + countCharInString(str + 1, value);
	cout << sum << endl;
	
	return sum;
}

int main() {
	char s[] = "himoooooom";
	cout << countCharInString(s, 'o') << endl;
}