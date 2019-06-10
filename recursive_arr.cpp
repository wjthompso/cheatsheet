#include <iostream>
using namespace std;

int sumArrayRecursive(int* arr, int len) {
	if (len <= 0) {
		return 0;
	}

	return (sumArrayRecursive(arr,len-1)) + arr[len-1];

}

int main() {
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	cout << sumArrayRecursive(arr, 10) << endl;
}