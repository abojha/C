#include<stdio.h>
#include<conio.h>
main()
{
	char a[50],b[50];
	int i=0;
	printf("Enter your name :\n");
    gets(a);
    
    while(a[i]!='\0')
    {
    	b[i]=a[i];
    	i++;
	}
	b[i]='\0';
	
	printf("\nCopied String : %s",b);
	
}
