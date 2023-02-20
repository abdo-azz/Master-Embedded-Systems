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

int main(void)
{
char* x=65; //ascii table start at A
int i ;
printf("The Alphabets are \n");
for(i=0 ;x<=90;i++) // finish in the Z
{
	printf("%c\t",x);
	x++;
}
}
