// ************* C Program to Find the area of Rectangle *************************
#include<stdio.h>

int main()
{
    float l,b,area;

    printf("Enter the length of rectangle\n");
    scanf("%f",&l);

    printf("Enter the breadth of rectangle\n");
    scanf("%f",&b);

    area = l*b;

    printf("The Area of Rectangle of lenght %.2f units and breadth %.2f units is %.2f units sq. ",l,b,area);


    return 0;
}