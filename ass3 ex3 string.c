

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char c[100],temp;
	int i,num;
	printf("enter a string: \n ");
	fflush(stdin);fflush(stdout);
	gets(c);
	num=strlen(c)-1;
	for (i=0;i<num;++i)
        {
            temp=c[i];
            c[i]=c[num];
            c[num]=temp;
            num--;
        }
	printf("Reverse string is= %s \n",c);
}
