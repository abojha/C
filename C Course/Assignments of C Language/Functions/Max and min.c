#include<stdio.h>
#include<conio.h>

int max(int a,int b);
int min(int a,int b);
main()
{
	int a,b,ans1,ans2;
	printf("Enter the two numbers");
	scanf("%d %d",&a,&b);
	
	ans1 = max(a,b);
	ans2 = min(a,b);
	printf("%d is maximum\n",ans1);
	printf("%d is minimum",ans2);
}

int max(int a,int b)
{
	return a>b ? a : b;
}
int min(int a,int b)
{
	return a<b ? a:b;
}
