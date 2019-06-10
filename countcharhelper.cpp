#include <iostream>
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

int countCharIterative(LinkedList* list, char value) {
	int count = 0;
	Node* n = list->head;

	while (n != NULL) {
		if (tolower(n->data) == value)
			count ++;
		n = n->next;
	}
	return count;
}


int countCharHelper(Node* head, char value) {
	if (head == NULL)
		return 0;
	int sum = (tolower(head->data) == value) + countCharHelper(head->next, value);
	
	return sum;
}

int countChar(LinkedList* list, char value) {
	assert(list);
	return countCharHelper(list->head, value);
}

int main() {
	char a[]= {'J', 'b', 'c', 'd', 'F'};
	LinkedList *b = arraytoendoflist(a, 5);

	cout << countCharHelper(b->head, 'f') << endl;

}