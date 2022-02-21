#include<stdio.h>
void sort(int a[],int start,int end);
void print(int a[],int len);
main()
{
	int a[100], even[100], odd[100];
	int i,neven,nodd;
	int len;
	
	printf("Enter the size of array:");
	scanf("%d",&len);
	
	printf("Enter the elements of array:");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	nodd=0,neven=0;
	
	for(i=0;i<len;i++)
	{
		if(a[i]%2==0)
		{
			even[neven]=a[i];
			neven++;
		}
		else
		{
			odd[nodd]=a[i];
			nodd++;
		}
	}
	i=0;
	sort(even,i,neven);
	print(even,neven);
	
	sort(odd,i,nodd);
	print(odd,nodd);
	
	

}
void sort(int a[],int start,int len)
{
	int j,temp;
	for(start=0;start<len;start++)
	{
		for(j=start+1;j<len;j++)
		{
			if(a[start]>a[j])
			{
				temp = a[start];
				a[start]=a[j];
				a[j]=temp;
			}
		}
	}
}
void print(int a[],int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}

}
