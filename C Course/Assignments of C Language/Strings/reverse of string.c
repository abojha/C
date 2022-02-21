#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[100];
	gets(a);
	
	char b[100];
	int i,j,count=0;
	
	while(a[count]!='\0')
	{
		count++;
	}
	
	j = count -1;
	
	for(i=0;i<count;i++)
	{
		b[i]=a[j];
		j--;
	}
	
	printf("%s",b);
	
	
	
	
	
	
	
	
	
	
	
	
}
