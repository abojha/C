#include<stdio.h>
#include<conio.h>
int check_prime(int n);
int check_perfect(int n);
main()
{
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	
	if(check_prime(n))
	{
		printf("\n%d is prime number",n);
	}
	else
	{
		printf("\n%d is not a prime number",n);
	}
	
	if(check_perfect(n))
	{
		printf("\n%d is perfect number\n",n);
	}
	else
	{
		printf("\n%d is not a perfect numeber",n);
	}
}

int check_prime(int n)
{
	int i,count =0;
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
		    count++;
		}
		
	}
	if(count==0 && n!=1)
	{return 1;
	}
		else
	 return 0;
	}
	

int check_perfect(int n)
{
	int i,sum=0;
	
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
		
	}
	if(sum==n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
