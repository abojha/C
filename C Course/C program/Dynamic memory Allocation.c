#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>
main()
{
	char *str;
	
	
	str =(char *)malloc(50);
	
	strcpy(str,"Hello C");
	
	printf("String = %s and address = %u",str,str);

	

}#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>
main()
{
	char *str;
	
	
	str =(char *)malloc(50);
	
	strcpy(str,"Hello C");
	
	printf("String = %s and address = %u",str,str);
	
	
	str=(char *)realloc(str,20);
	
	strcat(str," Programming");
	
		printf("\nString = %s and address = %u",str,str);
		
		
		free(str);

	

}
