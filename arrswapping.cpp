#include <iostream>
using namespace std;

int main() {

	int arr[4] = {10, 20, 30, 40};
	int i = 2, j = 3;
	arr[i] = arr[j];
	arr[j] = arr[i-1];

	cout << "{" << arr[0] << ", " << arr[1] << ", " << arr[2] << ", " << arr[3] << "}" << endl;
}