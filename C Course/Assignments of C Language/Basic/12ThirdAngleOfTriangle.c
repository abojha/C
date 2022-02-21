// *** C Program to enter the two angles of triangle and find out the third angle ****
#include<stdio.h>

int main()
{
    float a,b,c;
    printf("Enter the first angle of triangle:\n");
    scanf("%f",&a);

    printf("Enter the second angle of triangle:\n");
    scanf("%f",&b);

    c = 180 - (a + b);

    printf("The third angle of triangle is %.2f",c);
    return 0;
}