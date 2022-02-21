#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[100],ch;
	int i,j,k;
	
	printf("enter the string : ");
	gets(a);
	
	printf("Enter a character : ");
	scanf("%c",&ch);
	
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==ch)
		{
			j = i;
			break;
		}
	}
	k = j+1;
	
	while(j<strlen(a))
	{
		a[j]=a[j+1];
		j++;
	}
	printf(" the final string after of '%c' removal of first occurrecne at %d  is %s",ch,k,a);
}
