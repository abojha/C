#include<stdio.h>
#include<conio.h>
int find(int a);
int cube(int a);
main()
{
	int a,ans;
	printf("Enter the number");
	scanf("%d",&a);
	
	ans = find(a);
	printf("%d",ans);


	
}

int find(int a)
{
	if(a%2==0)
	{
		printf("%d is an even number",a);
	}
	else
	{
		printf("%d is an odd number",a);
	}
}

