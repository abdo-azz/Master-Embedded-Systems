#include <stdio.h>
#include <stdlib.h>
 struct
 {
     float real;
     float imag;
 }n1,n2,sum;
int main()
{
   printf("for 1st complex number :\n");
   printf("Enter real and imaginary respectively : ");
   scanf("%f %f",&n1.real,&n1.imag);
   printf("for 2nd complex number :\n");
   printf("Enter real and imaginary respectively : ");
   scanf("%f %f",&n2.real,&n2.imag);
   sum.imag=n1.imag+n2.imag;
   sum.real=n1.real+n2.real;
   printf("Sum =%f+%f i",sum.real,sum.imag);

}
