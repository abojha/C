#include<stdio.h>
#include<conio.h>
main()
{
float cm,m,km;

printf("Enter the value in centimetres\n");
scanf("%f",&cm);

m = cm/100.0;
km = cm/100000.0;

printf("Length in metre = %.2f m",m);
printf("\nLength in kilometre = %.2f km",km);






}
