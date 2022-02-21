#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char str[100],word[50];
	int i,j,k;
	
	printf("Enter a string : \n");
	gets(str);
	
	printf("Enter a word you want to check : ");
	gets(word);
	
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==word[0])
		{
			k = 1;
			for(j=0;j<strlen(word);j++)
			{
				if(str[i+j]!=word[j])
				{
					k=0;
					break;
				}
			}
			if(k==1)
		break;
		}
		
	}
	
	if(k==1)
	{
		printf("Require word is at the postition of %d is %s",i+1,word);
	}
	else
	{
		printf("Sorry");
	}
	
	
}
