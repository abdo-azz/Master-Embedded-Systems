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
	int r,c,i,j;
	printf("enter number of rows and column ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&r);
	fflush(stdin);fflush(stdout);
	scanf("%d",&c);
	int arr[r][c],t[c][r];

	for(i=0;i<r;++i)
	{
		for (j=0;j<c;++j)
		{
			printf("enter elements of matrix: ");
			printf("enter elements a%d%d ",i+1,j+1);
			fflush(stdin);fflush(stdout);

			scanf("%d",&arr[i][j]);
		}
	}
	printf("entered matrix ");

	for(i=0;i<r;++i)
	{
		for (j=0;j<c;++j)
		{

			printf("%d \t",arr[i][j]);
			fflush(stdin);fflush(stdout);

		}
	}
	for(i=0;i<r;++i)
	{
		for (j=0;j<c;++j)
		{
			t[i][j]=arr[j][i];
		}
	}
	printf("Transpose of Matrix: ");
	fflush(stdin);fflush(stdout);
	for(i=0;i<r;++i)
	{
		for (j=0;j<c;++j)
		{


			printf("%d  \t",t[i][j]);
			fflush(stdin);fflush(stdout);

		}
	}
}

