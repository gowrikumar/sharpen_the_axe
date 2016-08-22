#ifndef _BST_H
#define _BST_H

typedef int Element;

typedef struct node {
	Element e;
	struct node *left;
	struct node *right;
} Node;

typedef struct node* Node;
typedef struct node* BST;

BST InsertBST(BST,Element);
BST DeleteBST(BST,Element);
void InOrderBST(Tree);
void PreOrderBST(Tree);
void PostOrderBST(Tree);

#endif /* _BST_H */
