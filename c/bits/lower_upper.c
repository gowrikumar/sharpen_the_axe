#include <stdio.h>
#include <string.h>
/* ASCII lower case and upper case characters differ in the 6th bit
 * 
 * 01000001 A        01100001 a
 * 01000010 B        01100010 b
 * 01000011 C        01100011 c
 **/

char ToLower(char c)
{
	if(c>='A' && c<='Z')
		c = (c | 32);
	return c;
}

char ToUpper(char c)
{
	if(c>='a' && c<='z')
		c = (c & ~32);
	return c;
}

int main()
{
	char str[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i=0;

	for(i=0;i<strlen(str);i++)
		printf("%c",str[i]=ToLower(str[i]));
	printf("\n");
	for(i=0;i<strlen(str);i++)
		printf("%c",str[i]=ToUpper(str[i]));
	printf("\n");

	return 0;
}

