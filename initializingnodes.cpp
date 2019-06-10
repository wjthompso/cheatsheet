#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

int main() {
	Node *a = new Node;
	(*a).data = 4;
	a->data = 4;
	(*a).next = NULL;
	a->next = NULL;

	cout << a->data << endl;
}