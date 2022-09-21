#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0,i;
    printf("enter the number ");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
    sum=sum+i;
    }
    printf("Sum=%d",sum);
    return 0;
}
