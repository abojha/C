#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char str[100],word[50];
	int i,j,k=0,m=0;
	
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
		{
			m = i;
		}
		}
				 
	
		
		  
	
	
	
	}
	
     if(m==0)
     {
     	printf("sorry");
	 }
	 else
	 {
	 	printf("%d",m+1);
	 }
}
