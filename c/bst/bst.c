#include "bst.h"

Tree InsertBST(Tree t,Element e)
{
	if (t == NULL)
	{
		Node* temp;
		temp = (Node*) calloc(1,sizeof(Node));
		temp->e = e;
		return temp;
	}

	if(e < t->e)
		t->left = InsertBST(t->left,e);
	else
		t->right = InsertBST(t->right,e);

	return t;
}

void InOrderBST(Tree t)
{
	if(t)
	{
		InOrderBST(t->left);
		PrintNode(t);
		InOrderBST(t->right);
	}
}

void PreOrderBST(Tree t)
{
	if(t)
	{
		PrintNode(t);
		PreOrderBST(t->left);
		PreOrderBST(t->right);
	}
}

void PostOrderBST(Tree t)
{
	if(t)
	{
		PostOrderBST(t->left);
		PostOrderBST(t->right);
		PrintNode(t);
	}
}

void PrintNode(Tree t)
{
	if(t)
		printf("%d ",t->e);
}
