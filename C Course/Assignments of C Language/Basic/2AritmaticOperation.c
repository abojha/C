//**************** C Program to Perform all arithmatic operations*******************************
#include<stdio.h>

int main()
{
    int num1,num2;
    int sum,sub,mul,div,mod;

    printf("Enter the value of First number\n");
    scanf("%d",&num1);

    printf("Enter the value of second number\n");
    scanf("%d",&num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    mod = num1 % num2;

    printf("\nThe sum of %d and %d is %d",num1,num2,sum);
    printf("\nThe subtraction of %d and %d is %d",num1,num2,sub);
    printf("\nThe multiplication of %d and %d is %d",num1,num2,mul);
    printf("\nThe division of %d and %d is %d",num1,num2,div);
    printf("\nThe module of %d and %d is %d",num1,num2,mod);
    return 0;
}