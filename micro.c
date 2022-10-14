/*
 ============================================================================
 Name        : micro.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define pi 3.1415
#define area(r) r*r*pi
int main(void)
{
    int r;
    printf("Enter the radius: ");
    scanf("%d",&r);
printf("the area = %f",area(r));
}
