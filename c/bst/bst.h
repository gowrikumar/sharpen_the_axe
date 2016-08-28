#ifndef _BST_H
#define _BST_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int Element;

typedef struct node {
	Element e;
	struct node *left;
	struct node *right;
} Node;

typedef struct node* Tree;

Tree InsertBST(Tree,Element);
Tree DeleteBST(Tree,Element);
void InOrderBST(Tree);
void PreOrderBST(Tree);
void PostOrderBST(Tree);
void PrintNode(Tree);
#endif /* _BST_H */
