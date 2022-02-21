#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[100];
	int i,j;
	i = 0,j=-1;
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!= ' '&& a[i]!= '\n'&& a[i]!='\t')
		j = i;
	}
	a[j+1] = '\0';
	
	printf("%s",a);
	
	
	
}
