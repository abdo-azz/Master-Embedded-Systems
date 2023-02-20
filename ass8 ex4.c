#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a[15],rev[15],n;
    int* prev;
    int*ptr;
    ptr=a;
    prev=rev;
    printf("Input the number of elements to store in the array (max 15) :\n");
    scanf("%d",&n);
    printf("Input %d number of elements in the array :\n",n);
    for (i=1;i<=n;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&a[i]);
        ptr++;
    }
    printf("The elements of array in reverse order are : \n");
while(i>1)
{
    *prev=*ptr;
    *ptr--;
    i--;
printf("element - %d : %d \n",i,*prev);
}
}
