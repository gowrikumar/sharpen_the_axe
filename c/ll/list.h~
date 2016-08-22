#ifndef _LIST_H
#define _LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int Element;
void PrintElement(Element);

typedef struct Node {
	Element e;
	struct Node* next;
}Node;

typedef Node* List;
typedef Node* NodePtr;

List InitializeList();
void InsertBegin(List l, Element e);
void PrintList(List l);
void ReverseList(List l);
void ReverseListStack(List l);
void InsertEnd(List l, Element e);
void Error(const char* s);
void PairWiseSwap(List);
void SortList(List);
void SelectionSortList(List);
#endif /* _LIST_H */
