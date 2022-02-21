#include<stdio.h>
main()
{
	char a[50];
	printf("Enter the string in uppercase:\n");
	gets(a);
	
	int i;
	for(i=0;i!='\0';i++)
	{
		a[i]+=32;
	}
	
	printf("%s",a);
	
	
	

	
}
