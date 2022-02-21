#include<stdio.h>
#include<conio.h>
main()
{
	char a[100];
	int i,word =1;
	printf("Enter a sentence :");
	gets(a);
	
	i=0;
	while(a[i]!='\0')
	{
		if(a[i]==' ')
		{
			word++;
		}
		i++;
	}
	
	printf("%d",word);
	
	
	
	
	
	
	
}
