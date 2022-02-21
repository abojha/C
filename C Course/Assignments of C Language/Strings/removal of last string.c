#include<stdio.h>
#include<string.h>
main()
{
	char a[100],ch;
	int i,j,k,len;
	gets(a);
	scanf("%c",&ch);
	
	len = strlen(a);
	
	for(i=0;i<len;i++)
	{
		if(a[i]==ch)
		{
			j=i;
		
			
		}
		
		
	}
	k = j+1;
	
	while(j<len)
	{
		a[j]=a[j+1];
		j++;
	}

	
	printf("%c is removed from place %d and now string is %s",ch,k,a);

	
	
}
