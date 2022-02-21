#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	
	char a[100],word[100];
	int i,j,k=0,m = 0,len,removelen;
	
	gets(a);
	gets(word);
	len = strlen(a);
	removelen = strlen(word);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==word[0])
		{
			k = 1;
			for(j = 0;j<strlen(word);j++)
			{
				if(a[i+j]!= word[j])
				{
				 k =0;
				 break;
				}
			}
			
			if(k ==1)
			{
				m = i;
			}
		}
	}
	
	
	if(m==0)
	{
		printf("Sorry");
	}
	
	else
	{
		for(i = m; i<= len - removelen; i++)
		{
			a[i]= a[i+removelen];
		}
	}
	printf("%s",a);
}
