#include<stdio.h>
#include<conio.h>
int rev(int num)
{
int rem;
    if(num==0)
    {
    	return 0;
	}
	
	else
	{
		rem = num%10;
		printf("%d",rem);
		rev(num/10);
	}
}
main()
{
	int num;
	num =78954;
	rev(num);
	return 0;
}
