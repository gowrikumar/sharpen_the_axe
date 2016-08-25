#include <stdio.h>

void StringReverse(char* s)
{
	char *p = s;
	while(*p)
		p++;
	p--;

	while(s <p)
	{
		char t;
		t = *p;
		*p = *s;
		*s = t;
		s++;
		p--;
	}

}


#define NUM 5
#define MAX_STRING 256

int main()
{
	char str[NUM][MAX_STRING] = {"A","","Apple","Bar","abcde"};
	int i=0;

	for(i=0;i<NUM;i++)
	{
		printf("Reverse of %s ",str[i]);
		StringReverse(str[i]);
		printf("is %s\n",str[i]);
	}

	return 0;
}
