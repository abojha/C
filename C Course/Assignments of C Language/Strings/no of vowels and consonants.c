#include<stdio.h>
#include<conio.h>
main()
{
	char a[50];
	gets(a);
	
	
	
	
	int i=0,vowels=0,consonants=0;
	

	
	
	
	while(a[i]!='\0')
	{
		if(a[i]>=65 && a[i]<=90)
		{
			a[i]+=32;
		}
		
		
		if(a[i]>=97 && a[i]<=122)
		{if(a[i]=='a'|| a[i]=='e'|| a[i]=='o'||a[i]== 'i'||a[i]=='u')
			vowels++;
			
			else
			consonants++;
		}
		
		i++;
		
		
	}
	printf("No. of vowels : %d",vowels);
	printf("No. of consonants : %d",consonants);
	
	
	
	
}
