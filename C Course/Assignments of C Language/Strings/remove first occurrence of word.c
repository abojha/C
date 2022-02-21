#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	
	char a[100],word[100];
	int i,j,k=0,len,removelen;
	
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
				for(j=i;j<len;j++)
				a[j] = a[j + removelen];
				len = len - removelen;
				break;
				}
		}
	}
	
		printf("%s",a)
;	
	
}
