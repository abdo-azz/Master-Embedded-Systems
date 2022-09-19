/*
 ============================================================================
 Name        : ass5.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void print()
{
	char c;
	scanf("%c",&c);
	if(c!='\n')
	{
		print();
		printf("%c",c);
	}
}
int main(void) {
	printf("Enter a sentence: ");
	print();
	fflush(stdout);fflush(stdin);

	return 0;
}
