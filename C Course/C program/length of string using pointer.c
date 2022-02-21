#include<stdio.h>
#include<conio.h>
main()
{
	char a[20];
	gets(a);
	char *p;
	
	p = a;
	
	int i;
	
	while(*p!='\0')
	{
		i++;
		p++;
	}
	
	printf("%d",i);
	
	
	
}
