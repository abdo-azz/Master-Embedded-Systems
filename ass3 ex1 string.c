
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char c[100],al;
	int i,j=0;
	printf("enter a string: \n ");
	fflush(stdin);fflush(stdout);
	gets(c);
	printf("enter a character to find frequency: ");
    scanf("%c",&al);
	for (i=0;c[i]!='\0';++i)
	{
	if(c[i]==al)
        j++;
	}
	printf("frequency of %c =%d \n",al,j);
}
