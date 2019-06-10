#include <iostream>
using namespace std;

struct Node {
    int data; // the single value that this Node holds
    Node *next; // a pointer to the next node

};

bool findValueRecursively(Node* head, int value) {
	//Checking to see if we're at the last node
	if (!head) {
		return false;
	}
	//Checking to see if current node's data is equal to the value
	if (head->data == value) {
		return true;
	}

	//If not, call the function for the next Node
	return findValueRecursively(head->next, value);

}


int main() {
	Node *one = new Node;
    Node *two = new Node;
    Node *three = new Node;
    one->next = two;
    (*one).data = 1;
    two->data = 2;
    two->next = three;
    three->data = 3;
    three->next = NULL;

	if (findValueRecursively(one, 3)) cout << "True" << endl;
	else cout << "False" << endl;

	delete one;
	delete two;
	delete three;
}