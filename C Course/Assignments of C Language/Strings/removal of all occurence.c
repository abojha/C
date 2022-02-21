#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[100],ch;
	int i,j,len;
	gets(a);
	scanf("%c",&ch);
	
	len = strlen(a);
	
	for(i=0;i<len;i++)
	{
		if(a[i]==ch)
		{
		     for(j=i;j<len;j++)
		     {
		     	a[j]=a[j+1];
			 }
			 i--;
			 len--;
		     
		}
		
		
		
	}
	printf("%s",a);
}
