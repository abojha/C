#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
	char a[50];
	printf("Enter a string");
	gets(a);
	int i,ac,dc,sc;
	i=0;
	ac=dc=sc=0;
while(a[i]!='\0')
{
	if(isalpha(a[i]))
	{
		ac++;
	}
	else if(isdigit(a[i]))
	{
		dc++;
	}
	else
	{
		sc++;
	}
	i++;
	

}
	
		printf("No. of alphabets : %d",ac);
	printf("\nNo. of digits : %d",dc);
	printf("\nNo. of special character : %d",sc);
	
	
	
	
}
