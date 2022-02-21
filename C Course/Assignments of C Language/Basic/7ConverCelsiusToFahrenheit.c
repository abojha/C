// C Program to Conver the temperature from Celsius to Fahrenheit
#include<stdio.h>

int main()
{
    float c,f;

    printf("Enter the Temperature in Celsius:\n");
    scanf("%f",&c);

   f = (c*9)/5 + 32;

   printf("\nTemperature in Celsius = %.2f deg. c",c);
   printf("\nTemperature in Fahrenheit = %.2f deg. f",f);

   
    
    return 0;
}