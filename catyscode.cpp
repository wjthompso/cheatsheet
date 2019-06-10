#include <iostream>
using namespace std;

int minRecursiveArray(int* arr, int len) {
	if (len == 1) {
		return *arr;
	}

	int min = minRecursiveArray(arr,len-1);
	
}