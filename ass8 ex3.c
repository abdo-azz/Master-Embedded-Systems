/*
 ============================================================================
 Name        : ass8.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int i=-1;
	char*ptr;
	char*prev;
	char rev[50];
	char x[50];
	ptr=x;
	prev=rev;
	scanf("%s",x);


	while(*ptr)// if *ptr='\0'=null
	{
		ptr++;
		i++;//to know the count of char

	}
	while(i>=0)
    {
    ptr--;
    *prev=*ptr;
    prev++;
    i--;
    }
    *prev='\0';
printf("the output = %s",rev);
}
