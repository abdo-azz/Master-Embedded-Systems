/*
 ============================================================================
 Name        : ass1_ex4.c
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
	int n,i;
	unsigned long long int fact=1;
	printf("Enter an integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	if(n<0)
		printf("error the numer is negative number");
	else
	{
		for (i=1;i<=n;++i)
		{
		fact+=i;
		}
	printf("factorial = %lu",fact);
	}
}

