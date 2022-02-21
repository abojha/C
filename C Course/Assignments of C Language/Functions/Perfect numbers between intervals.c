#include<stdio.h>
#include<conio.h>
int perfect(int n);
int ab(int a,int b);
main()
{
	int a,b;
	printf("Enter the intervals");
	scanf("%d %d",&a,&b);
	ab(a,b);
	return 0;
}

int perfect(int n)
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


int ab(int a, int b)
{
	printf("All Perfect numbers between %d and %d are",a,b);
	
	while(a<=b)
	{
	
	if(perfect(a))
	{
		printf("%d\n",a);
	
	}
		a++; 
}
}
