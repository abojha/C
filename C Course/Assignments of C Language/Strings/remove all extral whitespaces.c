#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[100],b[100];
	int i,j,k;
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i] ==' ')
		{
			j = i+1;
			if(a[j]!='\0')
			{
				while(a[j]==' '&& a[j]!='\0')
				{
					if(a[j]==' ')
					{
						i++;
					}
					j++;
				}
			}
			
		}
		b[k] = a[i];
		i++;
		k++;
	}
	b[k] = '\0';
	
	printf("%s",b);
}
	
	
	
	

