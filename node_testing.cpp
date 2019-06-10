#include <iostream>
using namespace std;

struct Node {
    int data; // the single value that this Node holds
    Node *next; // a pointer to the next node

};

struct LinkedList {
    Node *head;
    Node *tail;
};

int main() {
	Node *x;

	cout << x->data << endl;

	//Node n;
	//n.data = 4;
	//n.next = NULL;

	//x->next = &n;

	//cout << x->next->data << endl;
}