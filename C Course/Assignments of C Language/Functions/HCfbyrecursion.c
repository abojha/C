#include<stdio.h>
#include<conio.h>
int HCF(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	else if(a<b)
	{
		return HCF(b,a);
	}
	else
	{
		return HCF(b,a%b);
	}
  
}
main()
{
	int a,b;
	
	a = 336;
	b = 60;
	printf("%d",HCF(a,b));
}
