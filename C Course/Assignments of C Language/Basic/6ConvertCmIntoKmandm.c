// C Program to Convert cm into km and m
#include<stdio.h>

int main()
{
    float cm,km,m;
    printf("Enter the value in Centimeter\n");
    scanf("%f",&cm);

    km = cm/100000;
    m = cm/100;

    printf("\nCentimeter to Kilometer = %.2f km",km);
    printf("\nCentimeter to meter = %.2f m",m);

    return 0;
}