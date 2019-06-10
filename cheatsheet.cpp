#include <CHEATSHEAT>

int sumIterative(Node *head) {
	int sum = 0;
	while (head != NULL)  {
		sum = sum + head->data;
		head = head->next; }
	return sum; 
}

char* tolower(const char *c) {
	char *a =  new char[strlen(c)];
	for (int i = 0; i < strlen(c); i++) {
		a[i] = tolower(c[i]);
	} 	//a[strlen(c)] = "\0";
	return a;
}

//C-String pecularity:
//char *b = "WSDAkeys";
// cout << b << endl; OUT: WSDAkeys (whole string)
// cout<< *b << endl; OUT: W (just the first character)

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

int findMinRecursive(int A[], int n) { 
    if (n <= 1) 
        return A[0];
    if (A[n-1] < findMinRec(A,n-1)) return A[n-1];
    else return findMinRec(A,n-1);
}

int sumArrayRecursive(int* arr, int len) {
	int (len <= 0) return 0;
	return sumArrayRecursive(arr, len-1) + arr[len-1];
}

bool findValueRecursively(Node* head, int value) {
	if (!head) return false;
	if (head->data == value) return true;
	return findvalueRecursively(head->next);
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

int countChar(LinkedList* list, char value) {
	assert(list);
	return countCharHelper(list->head, value);
}

int countCharHelper(Node* head, char value) {
	if (head == NULL) return 0;
	int sum = (tolower(head->data) == value) + countCharHelper(head->next, value);
	return sum;
}

int countCharInString(char* str, char value) {
	if (*str == '\0') return 0;
	int sum = (tolower(*str) == value) + countCharInString(str + 1, value);
	return sum;
}

//VARIABLE DECLARATIONS: REGULAR
int main() {
	int a = 10;
	double b = 20;
	char c = "h";
	bool d = true;
}

//VARIABLE DECLARATIONS: STRUCTURES
int main() {
	Point a;
	a.x = 10;
	a.y = 20;

	Box b;
	b.width = 1
	b.height = 2;
	b.point.x = 3;
	b.point.y = 4;
}

//VARIABLE DECLARATIONS: NODES AND LINKEDLISTS
int main() {
	Node *a = new Node;
	(*a).data = 4;
	a->data = 4;
	(*a).next = NULL;
	a->next = NULL;

	cout << a->data << endl;
}



