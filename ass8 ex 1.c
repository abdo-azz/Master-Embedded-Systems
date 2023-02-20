/*
 ============================================================================
 Name        : sys1.c
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
	int* ab;
	int m;
	ab=&m;
	*ab=29;
	printf("m=%d \t ab=%d \n",m,*ab);
	printf("m=%u \t ab=%u \n",&m,ab);
	 m=34;
	 printf("m=%d \t ab=%d \n",m,*ab);
	 printf("m=%u \t ab=%u \n",&m,ab);
}
