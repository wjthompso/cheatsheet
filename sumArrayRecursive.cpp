#include <iostream>
using namespace std;

int sumArrayRecursive(int* arr, int len) {
	if (len <= 0) return 0;
	return sumArrayRecursive(arr, len -1) + arr[len-1];
}

int main() {
	int arr[] = {1,2,3,4,5};
	cout << sumArrayRecursive(arr, 5) << endl;
}