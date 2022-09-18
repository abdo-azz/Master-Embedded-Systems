
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i,elements,location,arr[30];
	printf("Enter no of elements :");
	scanf("%d",&n);
	fflush(stdin);fflush(stdout);
	for (i=0;i<n;++i)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be inserted: ");
	scanf("%d",&elements);
	fflush(stdin);fflush(stdout);
	printf("enter the location ");
	scanf("%d",&location);
	fflush(stdin);fflush(stdout);
	arr[location-1]=elements;
	for (i=0;i<n;++i)
	{
		printf(" %d ",arr[i]);
	}

}
