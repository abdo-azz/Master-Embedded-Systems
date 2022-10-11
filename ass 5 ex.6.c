#include <stdio.h>
#include <stdlib.h>
union jop
{
char name[32];
float salary;
int work_no;
}u;
struct job1
{
char name[32];
float salary;
int work_no;
}s;
int main()
{
    printf("size of union: %d\n",sizeof(u));
    printf("size of structure: %d",sizeof(s));
    return 0;
}
