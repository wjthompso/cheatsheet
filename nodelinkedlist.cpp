#include <iostream>
#include <cstring>
#include <string>
using namespace std;

struct Node {
	int data;
	Node* next;
};

struct LinkedList {
	Node* head;
	Node* tail;
};

void addtolinkedlist(LinkedList*& list, int value) {
	Node* n = new Node;
	list->tail->next = n;
	n->data = value;
	n->next = 0;
	list->tail = n;
	return;

}

int main() {

	Node* a = new Node;
	Node* b = new Node;
	Node* c = new Node;
	LinkedList *d = new LinkedList;

	a->data = 1;
	a->next = b;
	b->data = 2;
	b->next = c;
	c->data = 3;
	c->next = 0;
	d->head = a;
	d->tail = c;

	addtolinkedlist(d, 5);
	addtolinkedlist(d, 8);

	cout << d->head->data << endl;
}