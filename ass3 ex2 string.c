

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char c[100];
	int i;
	printf("enter a string: \n ");
	fflush(stdin);fflush(stdout);
	gets(c);
	for (i=0;c[i]!='\0';++i);
	printf("length of string =%d \n",i);
}
