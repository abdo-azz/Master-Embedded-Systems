#include <stdio.h>
#include <stdlib.h>
int fact(int x)
{
    if(x!=1)
return x*fact(x-1);
}
int main()
{
    int n,out;
  printf("enter the integer number :");
  scanf("%d",&n);
  out=fact(n);
  printf("factorial of %d =%d",n,out);
}
