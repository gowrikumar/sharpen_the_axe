 /* gcc -Wall bst.c main.c */

#include "bst.h"

int main()
{
	Tree t = NULL;
	int i = 0;
	int num = 0;

	srand(time(NULL));

	for (i=0;i<5;i++)
	{
		num = rand() % 100;
		printf("Inserting : %d\n",num);
		t = InsertBST(t,num);

		printf("InOrder:\n");
		InOrderBST(t);
		printf("\n");

		printf("Post Order:\n");
		PostOrderBST(t);
		printf("\n");

		printf("Pre Order:\n");
		PreOrderBST(t);
		printf("\n");
	}

	return 0;
}
