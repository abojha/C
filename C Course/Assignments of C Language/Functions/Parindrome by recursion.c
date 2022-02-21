#include<stdio.h>
#include<conio.h>
int rev(int a)
{
	static int t=0;
	if(a==0)
	{
		return t;
	}
	t = t*10 + a %10;
	return rev(a/10);
}
main()
{   
	int num,p;
	num = 121;
	p = rev(num);
	if(p==num)
	{
	    printf("it is good");	
	}
	else
	{
		printf("not");
	}
}


	
