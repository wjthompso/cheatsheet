#ifndef ARRAYTOENDOFLIST.H 
#define  ARRAYTOENDOFLIST.H
#include "arraytoendoflist.h"
#include "linkedlist.h"
#include <algorithm>
#include <climits>
#include <string>

void addtolinkedlist(LinkedList*& list, char value);

LinkedList* arraytoendoflist(char* arr, int len);

#endif