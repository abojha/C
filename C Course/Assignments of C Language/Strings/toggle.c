#include<stdio.h>
#include<conio.h>
main()
{
	char a[100];
	printf("Enter a string : ");
	gets(a);
	
	
	int i;
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			a[i]+=32;
		}
		
		else if(a[i]>=97 && a[i]<=122)
		{
			a[i]-=32;		
		}
		
	}
	

	printf("%s",a);
	
	
}
