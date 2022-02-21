#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[100];
	gets(a);
	int n,i,c=0;
	
	n=strlen(a);
	
	for(i=0;i<n/2;i++)
	{
		if(a[i]==a[n-i-1])
		{
			c++;
		}
		
	}
	if(c==i)
	{
		printf("palindrome");
	}
	else
	{
		printf("not");
	}
	
	
	
	
	
	
	
}
