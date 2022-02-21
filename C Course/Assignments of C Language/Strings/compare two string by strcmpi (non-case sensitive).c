#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{

char a[50],b[50];
printf("Enter first String: \n");
gets(a);

printf("Enter second string : \n");
gets(b);

if(strcmpi(a,b)==0)
{
	printf("Both strings are equal");
}
else if(strcmpi(a,b)>0)
{
	printf("First String is greater");
}
else
{
	printf("Second string is greater");
}





}
