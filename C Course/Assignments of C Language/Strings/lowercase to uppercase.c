#include<stdio.h>
#include<conio.h>
main()
{
	char a[50];
	printf("Enter the string in lowecase:\n");
	gets(a);
	
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		a[i]-=32;
	}
	
	printf("%s",a);
	
	
	

	
}
