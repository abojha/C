// C Program to enter the radius of circle and find its diameter, circumference and area.
#include<stdio.h>
#define Pi 3.14;
int main()
{
    float radius,diameter,circumference,area;

    printf("Enter the radius of circle\n");
    scanf("%f",&radius);

    diameter = 2 * (radius);
    circumference = 2 * 3.14 * radius;
    area = 3.14 * ( radius * radius);

    printf("\nRadius of Circle is %.2f units\n", radius);
    printf("Diameter of Circle is %.2f units\n",diameter);
    printf("Circumference of Circle is %.2f units\n",circumference);
    printf("Area of Circle is %.2f units sq.\n",area);

    return 0;
}