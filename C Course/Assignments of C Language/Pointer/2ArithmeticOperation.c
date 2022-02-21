//************************** C Program to do Arithmatic Operation by Using Pointer ************************

#include<stdio.h>

int main()
{
    int num1,num2;

    int *p1,*p2;
    int sum,sub,mul,div;

    p1 = &num1;
    p2 = &num2;

    printf("\nEnter any two numbers:\n");

    scanf("%d %d",p1,p2);

    sum = (*p1) + (*p2);
    sub = (*p1) - (*p2);
    mul = (*p1) * (*p2);
    div = (*p1) / (*p2);

    printf("Sum of given number is %d",sum);
    printf("\nsub of given number is %d",sub);
    printf("\nmul of given number is %d",mul);
    printf("\ndiv of given number is %d",div);

    return 0;
}