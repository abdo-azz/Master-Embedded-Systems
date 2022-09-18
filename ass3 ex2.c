/*
 ============================================================================
 Name        : ass2.c
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
	float f,avg,sum;
	printf("enter the number of data : \t");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	float arr[n];
	for(i=0;i<n;++i)
	{
		printf("%d.Enter number : \n",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&arr[i]);
		sum=sum+arr[i];
	}
printf("Average is %f",sum/n);
}
