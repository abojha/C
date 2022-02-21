// ***** C Program to find out the area of triangle ******************
#include<stdio.h>

int main()
{
    float height, base, area;

    printf("Enter the height and base of triangle in m\n");
    scanf("%f %f",&height, &base);

    area = (base*height)/2;

    printf("The area of triangle is %.2f m sq",area);
    return 0;
}