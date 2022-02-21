// ******** C Program to calculate square root of any number **********
#include<stdio.h>
#include<math.h>
int main()
{
    float n,a;
    printf("Enter the number:\n");
    scanf("%f",&n);

    a = sqrt(n);
    printf("\nThe square root of %.2f is %.2f",n,a);
    return 0;
}