#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char str[200],ch,newch;
	int i,j;
	
	printf("\nEnter a string : ");
	gets(str);
	
	printf("\nEnter a character which you want to replace : ");
	scanf("%c",&ch);
	getchar();
	
	printf("\nEnter a new character : ");
    scanf("%c",&newch);
	
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==ch)
		{
			j=i;
			
			
		}
	}
     str[j]=newch;
	
	printf("\nnew string : %s",str);
	
}
