#include "list.h"
void Error(const char* s)
{
	fprintf(stderr,"%s",s);
}

List InitializeList()
{
	Node* temp;
	temp = (Node*)calloc(1,sizeof(Node));
	if(temp == NULL)
	{
		Error("Fatal: Memory allocation failed!!\n");
	}
	return temp;
}

void InsertBegin(List l, Element e)
{
	Node* temp;

	temp = (Node*)calloc(1,sizeof(Node));
	if(temp == NULL)
	{
		Error("Fatal: Memory allocation failed!!\n");
	}

	temp->e = e;
	temp->next = l->next;
	l->next = temp;
}

void InsertEnd(List l, Element e)
{
	Node *temp;
	Node *end;

	temp = (Node*)calloc(1,sizeof(Node));
	if(temp == NULL)
	{
		Error("Fatal: Memory allocation failed!!\n");
	}

	temp->e = e;

	end = l;
	while(end->next)
		end = end->next;

	end->next = temp;

}

void PrintElement(Element e)
{
	printf("%d ",e);
}

void PrintList(List l)
{
	if(l)
	{
	       l = l->next;
	       while(l)
	       {
		       PrintElement(l->e);
		       l = l->next;
	       }
	       printf("\n\n");
	}
}

void ReverseList(List l)
{

	Node *prev,*cur,*next;

	cur = l;
	next = l->next;

	/* empty list */
	if(!next)
		return;

	while(next)
	{
		prev = cur;
		cur = next;
		next = next->next;
		cur->next = prev;
	}

	/* Make the first node or the original list point to NULL
	 * This would the end of the reversed list and hence need
	 * to make it NULL
	 */
	l->next->next = NULL;

	/* Now make the last node of the original list, the head of the list */
	l->next = cur;
}

void ReverseListStack(List l)
{
	Node *head,*temp;
	head = l->next;

	/* empty list */
	if(!head)
		return;

	l->next = NULL;

	while(head)
	{
		temp = head;
		head = head->next;

		temp->next = l->next;
		l->next = temp;
	}
}

void PairWiseSwap(List l)
{
	Node *prev,*first,*second,*next;

	first = l;
	next = l->next;

	if(!next)
		return;


	while(next)
	{
		prev = first;
		first = first->next;

		second = first->next;
		if(second)
		{
			next = second->next;
			prev->next = second;
			second->next = first;
			first->next = next;
		}
		else
			next = NULL;

	}

}

void SortList(List l)
{
	Node *i,*j;

	i = l->next;

	if(!i)
		return;

	for (;i->next!=NULL;i=i->next)
	{
		for(j = i->next;j != NULL; j = j->next)
		{
			if(j->e < i->e)
			{
				Element temp = i->e;
				i->e = j->e;
				j->e = temp;
			}

		}
	}
}

void SelectionSortList(List l)
{
}
