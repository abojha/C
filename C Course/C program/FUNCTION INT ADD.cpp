#include<stdio.h>
#include<conio.h>
int add(int a,int b);
int mul(int a,int b);
main()
{
	int a,b,sum_ans,sum_mul;
	a=10;
	b=5;
	sum_ans=add(a,b);
	sum_mul=mul(a,b);
	printf("%d",sum_ans);
	printf("%d",sum_mul);
}

int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int mul(int a,int b)
{
	int c;
	c=a*b;
	return c;
}
	
	
	
	
	

