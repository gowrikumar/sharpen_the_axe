#include <stdio.h>
#include <ctype.h>
#include <string.h>

void StringReverse(char* s, int begin,int end)
{
	while(begin < end)
	{
		char t;
		t = s[begin];
		s[begin] = s[end];
		s[end] = t;
		begin++;
		end--;
	}

}

void StringWordReverse(char* s)
{
	int i=0,j=0,n=0;

	n = strlen(s);
	StringReverse(s,0,n-1);
	
	while(i<n)
	{
		j = i;
		while(s[i] && !isspace(s[i]))
			i++;

		StringReverse(s,j,i-1);
		while(s[i] && isspace(s[i]))
			i++;
	}
}
int main()
{
	 /* 
	char str[] = "My";
	char str[] = "My name";
	char str[] = "My name ";
	*/
	char str[] = "My name is gowri kumar";

	printf("The string is : %s\n",str);
	StringWordReverse(str);
	printf("The reversed word string is : %s\n",str);

	return 0;
}
