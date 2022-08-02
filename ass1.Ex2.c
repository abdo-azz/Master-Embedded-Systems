
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char c;
printf("Enter an alphabet:");
fflush(stdin);fflush(stdout);
scanf("%c",&c);
if(c=='a'||c=='A'||c=='o'||c=='O'||c=='u'||c=='U'||c=='e'||c=='E'||c=='i'||c=='I')
	printf("%c is a vowel",c);
else
	printf("%c is a consonant",c);
}
