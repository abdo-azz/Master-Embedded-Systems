#include <stdio.h>
#include <stdlib.h>
struct Sdistance
{
    int feet;
    float inch;
}s1,s2,sum ;

int main()
{ ;
printf("Enter information for 1st distance\n");
printf("Enter feet: ");
scanf("%d",&s1.feet);
printf("Enter inch: ");
scanf("%f",&s1.inch);
printf("Enter information for 2nd distance ");
printf("Enter feet: ");
scanf("%d",&s2.feet);
printf("Enter inch: ");
scanf("%f",&s2.inch);
printf(" the var %f",s2.inch);

sum.feet=s1.feet+s2.feet;
sum.inch=s1.inch+s2.inch;
if (sum.inch>12.0)
{
    sum.inch=sum.inch-12.0;
    ++sum.feet;
}
printf("sum of distance=%d'-%f''",sum.feet,sum.inch);


}
