#include<stdio.h>
#include<conio.h>
int nat(int a ,int b)
{
     if (a<b)
	{   printf("%d\n",a);
	 	return nat(a+1,b);
	}

}
main()
{
	int a=1,b,ans;
	printf("Enter the last limit of natural number:");
	scanf("%d",&b);
	ans=nat(a,b);
	printf("%d",ans);
	
}
