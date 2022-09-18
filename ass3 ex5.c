/*
 ============================================================================
 Name        : ass3.c
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
	int n,i,elements,arr[30];
		printf("Enter no of elements :");
		scanf("%d",&n);
		fflush(stdin);fflush(stdout);
		for (i=0;i<n;++i)
		{
			scanf("%d",&arr[i]);
		}
		printf("enter the element to be searched: ");
		scanf("%d",&elements);
		fflush(stdin);fflush(stdout);
		for (i=0;i<n;++i)
				{
			if(arr[i]==elements)
				{
					printf("the number found at the location %d ",i+1);
					break;
				}

				}
				 if(i>=n)
			{
				printf("the number isn't found ");
			}



}
