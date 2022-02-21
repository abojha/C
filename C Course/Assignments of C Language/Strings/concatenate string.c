#include<stdio.h>
#include<conio.h>
main()
{

char a[50], b[50];
printf("Enter first name:");
gets(a);

printf("Enter last name:");
gets(b);

int j=0,i=0;

while(a[i]!='\0')
{
	i++;
}
a[i]=' ';
i++;

while(b[j]!='\0')
{
	a[i]=b[j];
	i++,j++;
}
a[i]='\0';
puts(a);
}
