#include <stdio.h>
#include <stdlib.h>

unsigned int RemoveElem(int arr[],unsigned int len, int n)
{
	unsigned int dst,src;
	for(src=0,dst=0;src<len;src++)
	{
		if(arr[src] != n)
			arr[dst++] = arr[src];
	}

	return dst;
		
}

#define SIZEOF(a) (sizeof(a)/sizeof(a[0]))

void PrintArray(int arr[],unsigned int len)
{
	for(unsigned int i = 0;i<len;i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main()
{
	 // int arr[] = {7,2,4,3,3,3,1,3,3};
	int arr[] = {3,3,3,5,5,2};
	unsigned int len;
	len = RemoveElem(arr,SIZEOF(arr),3);
	PrintArray(arr,len);
	return 0;
}
