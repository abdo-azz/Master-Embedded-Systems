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
int prime(int x)
{
	int k;int p=0;
	for (k=2;k<x/2;k++)
	{
		if(x%k==0)
		{
			p=1;
			break;
		}
	}
	return p;
}
int main(void)
{
	int n,m,b,i;
	printf("enter two number(intervals):");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&n, &m);
	fflush(stdin);fflush(stdout);

	for(i=n+1;i<n;++i)
	{
		b=prime(i);
		if (b==0)
			printf("%d",i);
	}

}
