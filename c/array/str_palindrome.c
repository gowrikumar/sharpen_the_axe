#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int IsPalindrome(const char* str)
{
	int len;
	int i;

	len = strlen(str)-1;
	for(i=0;i<len;i++,len--)
	{
		if(str[i] != str[len])
			return FALSE;
	}
	return TRUE;
}

#define MAX_STRING 256
#define NUM 9

int main()
{
	char str[NUM][MAX_STRING] ={"able was i ere i saw elba",
		"foo",
		"bar",
		"noon",
		"radar",
		"",
		"A",
		"AA",
		"AB"
	};
	int i=0;

	for(i=0;i<NUM;i++)
	{
		if(IsPalindrome(str[i]))
			printf("%s is palindrome\n",str[i]);
		else
			printf("%s is NOT a palindrome\n",str[i]);
	}
	return 0;
}
