#include<stdio.h>
#include<conio.h>
float pi = 3.14;
int di(int a)
{
	return 2*a;
}
float ci(float a)
{   
	return 2*pi*a;
}
float a(float a)
{
	
	return pi*a*a;
}

main()
{
	int p;
	p = 3;
	printf("Radius of circle : %d",di(p));
	printf("\nCircumference of Circle: %.2f",ci(p));
	printf("\nArea of Circle : %.2f",a(p));
}
