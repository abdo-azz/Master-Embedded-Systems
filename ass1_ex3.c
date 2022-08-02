
 //Name        : ass1_ex3.c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,b,c;
	printf("enter 3 numbers:");
	fflush(stdout);fflush(stdin);
	scanf("%f%f%f",&a,&b,&c);
	if (a>b&&a>c)
		printf("largest number = %.2f",a);
	else if(b>a&&b>c)
		printf("largest number= %.2f",b);
	else
		printf("largest number= %.2f",c);


}
