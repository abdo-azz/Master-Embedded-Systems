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
int power(int x,int exp)
{
if (exp!=0)
	return x*power(x,exp-1);
	else
        return 1;
}
int main(void)
{
	int out,n,exp;
	printf("enter base number: ");
	scanf("%d",&n);
	fflush(stdin);fflush(stdout);
    printf("enter power (positive integer) ");
    scanf("%d",&exp);
    printf("%d^%d=%d",n,exp,power(n,exp));
}
