#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[100],b[100]= "",c[50];

	int i,j;
	
	gets(a);

	strrev(a);
	strcat(a," ");
	j=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			c[j] = '\0';
		     strrev(c);
		     strcat(b,c);
			 strcat(b," ");
			j=0;
		}
		else
		{
			c[j]=a[i];
			j++;
		}
		
		
	}
	printf("%s",b);
	
	
	
	
	
	
}
