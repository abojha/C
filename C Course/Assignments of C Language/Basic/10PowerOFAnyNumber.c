// ************** C Program to find out the Power of any number ***************************
#include<stdio.h>
#include<math.h>
int main()
{
    int p,b,a;
    printf("Enter the base:\n");
    scanf("%d",&b);

    printf("Enter the power:\n");
    scanf("%d",&p);
    a = pow(b,p);

    printf("%d",a);
    return 0;
}