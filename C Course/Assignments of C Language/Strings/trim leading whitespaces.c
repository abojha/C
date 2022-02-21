#include<stdio.h>
#include<conio.h>
#include<string.h>
void trimleading(char * str)
{
	int i=0 ,j,k;
	
	
	while(str[i]==' '|| str[i] == '\n'|| str[i]=='\t')
	{
		i++;
		
	}
	if(i!=0)
	{
		j = 0;
		while(str[j+i]!='\0')
		{
			str[j] = str[j+i];
			j++;
		}
			str[j] = '\0';
	}

}
main()
{
	
	char str[100];
	
	printf("Enter a string : ");
	gets(str);
	
	trimleading(str);
	
	printf("\n%s",str);
	return 0;
	
	
	
}
