#include<stdio.h>
#include<conio.h>
int prime(int n);
int print(int a, int b);
main()
{
	int a,b;
	printf("Enter the lower and upper limit to list primes:");
	scanf("%d %d",&a,&b);
	
	print(a,b);
	return 0;
}

int check(int n)
{
	int i,count=0;
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
		
	}
	if(count==2)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	
	
	
}
int print(int a,int b)
{
	printf("all Prime numbers between %d and %d are",a,b);
	
	while(a<=b)
	{
		if(check(a))
		{
			printf("%d",a);
		}
		a++;
	}
}
