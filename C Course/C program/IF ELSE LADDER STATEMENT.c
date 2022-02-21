#include<stdio.h>
#include<conio.h>
main()
{
	int marks;
	printf("Enter the marks\n");
	scanf("%d",&marks);
	
	if(marks>=75 && marks <=100)
	{ 
	  printf("A grade");  
	}
	
	else if(marks>=50 && marks<75)
	{
		printf("B grade");
	}
	
	else if(marks>=35 && marks<50)
	{
		printf("C grade");
	
	}
	else
	{
		printf("Fail!!");
	}
	
	
	
}
