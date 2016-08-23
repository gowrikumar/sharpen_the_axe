/* gcc arr_remove_duplicates.c */
#include <stdio.h>
#include <string.h>

void arr_remove_duplicates(char str[])
{
	int tail=0;
	int len = 0;
	int i,j;

	len = strlen(str);
	/* if single element, nothing to do return */
	if(len < 2)
		return;

	tail = 1;
	for(i=1;i<len;i++)
	{
		for(j=0;j<tail;j++)
		{
			if(str[i] == str[j])
				break;
		}

		if(j==tail)
			str[tail++] = str[i];
	}

	str[tail] ='\0';
}


int main()
{
	char str[] = "axbcbxdeea";
	arr_remove_duplicates(str);
	printf("%s\n",str);
	return 0;
}

