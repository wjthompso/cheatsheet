#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

bool search(int *a, int len, int value) {
	for (int i = 0; i < len; i++) {
		if (a[i] == value) {
			return true;
		}
	}
	return false;
}

bool search1(int *a, int len, int value) {
	if (len==0) return false;
	if (a[len-1] == value) return true;
	else return search(a, len-1, value);
}

int main() {
	int arr[] = {1,2,5,0,8};
	if (search1(arr,5,1)) {
		cout << "True" << endl;
	} else {
		cout << "False" << endl;
	}
	return 0;
}