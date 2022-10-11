#include <stdio.h>
#include <stdlib.h>
struct Sstudent
{
    char name[50];
    int roll;
    float marks;
}x[10];
int main()
{
    int i;
printf("Enter information of students :\n");
for (i=0;i<=9;i++)
{
    printf("for roll number ");
    scanf("%d",&x[i].roll);
    printf("Enter name: ");
    scanf("%s",x[i].name);
    printf("Enter marks");
    scanf("%f",&x[i].marks);
}
printf("display information of student ");
for (i=0;i<=9;i++)
{
    printf("Information for roll number %d\n",x[i].roll);
    printf("name: %s\n",x[i].name);
    printf("marks: %f",x[i].marks);
}

}
