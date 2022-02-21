#include<stdio.h>
#include<conio.h>
int main()
{	char choice ='y';
	int x;
while(choice=='y'||choice=='Y')
   {
	printf("Enter the value of x");
	scanf("%d",&x);
   
	   	
	if(x>=1000)
	{
		printf("x is Hugely Positive");
	}
	
	else if(x<1000 && x >=100)
	{
		printf("x is very positive");
	}
	
	else if(x<100 && x>0)
	{
		printf("x is positive");
	}
	
	else if(x=0)
	{
		printf("x is zero");
	}
	
	else if(x<0 && x>-100)
	{
		printf("x is negative");
	}
	
	else if(x<=-100 && x>-1000)
	{
		printf("x is very negative");
	}
	
	else if(x<=-1000)
	{
		printf("x is Hugely negative");
	}
	printf("\nDo you want to continue Y/N\n");
	scanf("%s",&choice);
	}
	
	
return 0;



}

   





