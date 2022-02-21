       #include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[100];
	int i,j,k;
	
	gets(a);
	
	for(i=0;i<strlen(a);i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[j]==a[i])
			{
				for(k=j;a[k]!='\0';k++)
				{
					a[k]=a[k+1];
				}
			}
		}
	}
	printf("%s",a);
	
}
