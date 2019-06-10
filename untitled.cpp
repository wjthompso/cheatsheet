#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void printBackwards(int *arr, int len) {
	if (len <= 0) return;
	cout << arr[len - 1] << " ";
	printBackwards(arr,len);
	arr = arr + 1;
	len = len - 1;
}

int main() {
	int arr[4] = {1, 2, 3, 4};
	printBackwards(arr, 4);
}