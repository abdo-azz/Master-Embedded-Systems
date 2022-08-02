/*
 ============================================================================
 Name        : ass1_ex1.c
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
	int n;
	printf("enter an integer u want to cheak: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	if(n%2==1)
	printf("%d is odd",n);
	else
		printf("%d is even",n);
}
