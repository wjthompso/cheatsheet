#include <iostream>
#include <cstring>
#include <string>
using namespace std;

struct Node {
	char data;
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

LinkedList* arraytoendoflist(char* arr, int len) {
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

int main() {
	//char a[] = {'a','b','c','d','e'};
	char a[]= {'a', 'b', 'c', 'd', 'e'};
	LinkedList *b = arraytoendoflist(a, 4);

	cout << b->tail->data << endl;
}