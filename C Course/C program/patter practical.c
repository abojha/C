#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	
	for(i=1;i<=100;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				printf(" 1 ");
			}
			else
			{
				printf(" 0 ");
			}
		}
		printf("\n");
	}
	
	
	
	
}
