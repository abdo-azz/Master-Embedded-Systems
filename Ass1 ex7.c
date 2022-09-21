#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    float num1,num2;
    printf("enter operator + or - or * or divide : ");
    scanf("%c",&op);
    printf("enter two operator ");
    scanf("%f %f",&num1,&num2);
    switch(op)
    {
        case '+':printf("%f %c %f= %f ",num1,op,num2,num1+num2);
        break;
        case '*' :printf("%f %c %f=%f",num1,op,num2,num1*num2);
        break;
        case '-' :printf("%f %c %f=%f",num1,op,num2,num1-num2);
        break;
        case '/' :printf("%f %c %f=%f",num1,op,num2,num1/num2);
        break;
    }
    return 0;
}
