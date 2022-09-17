#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int r,c;
	float a[2][2],b[2][2],s[2][2];
 printf("enter the element of 1st matrix\n");
 fflush(stdin);fflush(stdout);
 for(r=0;r<2;++r)
 {
	 for(c=0;c<2;++c)
	 {
		 printf("enter a%d%d: \n",r+1,c+1);
		 fflush(stdin);fflush(stdout);
		 scanf("%f",&a[r][c]);

	 }
 }
 printf("enter the element of 2nd matrix\n");
for(r=0;r<2;++r)
 {
	 for(c=0;c<2;++c)
	 {
		 printf("enter b%d%d: \n",r+1,c+1);
		 fflush(stdin);fflush(stdout);
		 scanf("%f",&b[r][c]);

	 }
 }
for(r=0;r<2;++r)
 {
	 for(c=0;c<2;++c)
	 {
		 s[r][c]=a[r][c]+b[r][c];

	 }

 }
 printf("the out put =");
for(r=0;r<2;++r)
 {
	 for(c=0;c<2;++c)
	 {
		 printf("%f\t",s[r][c]);


	 }

 }
}
