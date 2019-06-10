#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

struct LinkedList {
	Node* head;
	Node* tail;
};

void addtolinkedlist(LinkedList*& list, char value) {
	Node* n = new Node;
	list->tail->next = n;
	n->data = value;
	n->next = 0;
	list->tail = n;
	return;
}

LinkedList* arraytoendoflist(int* arr, int len) {
	LinkedList* l = new LinkedList;
	Node* p = new Node;
	p->data = arr[0];
	p->next = NULL;
	l->head = p;
	l->tail = p;

	for (int i = 1; i < len; i++) {
		addtolinkedlist(l, arr[i]);
	}

	return l;
}

int sumIterative(Node *head) {
	int sum = 0;
	while (head != NULL)  {
		sum = sum + head->data;
		head = head->next;
	}
	return sum;
}

int main() {
	int a[]= {4, 4, 4, 4, 5};
	LinkedList *b = arraytoendoflist(a, 5);
	cout << sumIterative(b->head) << endl;
}