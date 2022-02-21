#include<stdio.h>
#include<conio.h>
int Lcm(int a,int b)
{
	static int t=0;
	t = t + b;
	if(t%a==0 && t%b ==0)
	{
		return t;
	}
	else
	{
		return Lcm(a,b);
	}
	
}
main()
{    int a,b;
	a = 16;
	b =6;
	printf("%d",Lcm(a,b));
	
}
