#include <stdio.h>
#include <stdlib.h>
struct S
{
    char name[50];
    int roll_number;
    float mark;
};
int main()
{
    struct S s;
    printf("Enter information of students : \n");
    printf("Enter name : ");
    scanf("%s",s.name);
    printf("Enter roll number :");
    scanf("%d",&s.roll_number);
    fflush(stdin);fflush(stdout);
    printf("enter marks : ");
    scanf("%f",&s.mark);
    printf("Display information \n name:%s \n Roll:%d \n marks: %f ",s.name,s.roll_number,s.mark);
    return 0;
}
