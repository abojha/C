#include<stdio.h>
#include<string.h>
main()
{
	char a[50],b[50];
	
	printf("Enter the first string:");
	gets(a);
	
	strcpy(b,a);
	puts(b);
}
