/* gcc -Wall list.c main.c */

#include "list.h"

int main()
{
	List l=NULL;
	int i=0;

	l = InitializeList();

	for(i=10;i<50;i+=10)
	{
		InsertBegin(l,i);
		PrintList(l);

		printf("Reverse: ");
		ReverseListStack(l);
		PrintList(l);

		printf("PairWiseSwap: ");
		PairWiseSwap(l);
		PrintList(l);

		printf("Sort: ");
		SortList(l);
		PrintList(l);
	}

	return 0;
}
