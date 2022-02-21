#include<stdio.h>
#include<conio.h>
int num(int a,int b)
{   if(a<b)
     
 if(a%2!=0)
	{
		printf("\n%d\n",a);
	}
	
	return num(a+1,b);
}




main()
{
	int a,b;
	a=1;
	b=100;
  
   printf("Odd numbers are:");
    printf("%d",num(a,b));
	
}

