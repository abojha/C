#include<stdio.h>
#include<conio.h>

main()
{
	char a[100];
	gets(a);

	
int i,n,c=0;

while(a[i]!='\0')
{
	n++;
}


for(i=0;i<n/2;i++)
{
if(a[i]==a[n-i-1])
{
	c++;
}
}

if(c==i)
{
	printf("string is pallandrome");
}
else
{
	printf("String is not");
}
	
	
	
	
	
	
	
	
	
	
}
