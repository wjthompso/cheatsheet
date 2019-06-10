#include <iostream>
using namespace std;
  
// function to print Minimum element using recursion 

int findMinRec(int A[], int n) { 
    if (n <= 1) 
        return A[0];

    if (A[n-1] < findMinRec(A,n-1)) {
    	return A[n-1];
    } else return findMinRec(A,n-1);
}

//return min(A[n-1], findMinRec(A, n-1));

int findMinRec1(int A[], int n) 
{ 
    if (n == 1) 
        return A[0];
    return min(A[n-1], findMinRec(A, n-1));
}

int main() {

	int A[] = {1, 4, 45, 6, 0, 10, -50};
	cout << findMinRec(A, 7) << endl;
	cout << findMinRec1(A, 7) << endl;
}
