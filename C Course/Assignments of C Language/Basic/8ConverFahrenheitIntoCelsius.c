// C Program to Conver the temperature from Fahrenheit to Celsius
#include<stdio.h>

int main()
{
    float c,f;

    printf("Enter the Temperature in Celsius:\n");
    scanf("%f",&f);

     c = ((f-32)*5)/9;

   printf("\nTemperature in Fahrenheit = %.2f deg. f",f);
   
   printf("\nTemperature in Celsius = %.2f deg. c",c);

   
    
    return 0;
}