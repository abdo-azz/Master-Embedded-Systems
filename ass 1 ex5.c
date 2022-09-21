#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
printf("enter the number: ");
scanf("%f",&num);
if (num<0)
    printf("the number is negative %f",num);
else if(num==0)
    printf("the number is zero");
else
    printf("%f is positive ",num);
}
