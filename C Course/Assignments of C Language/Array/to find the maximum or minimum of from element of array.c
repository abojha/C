#include<stdio.h>
#define Max_Size 100
int maxi(int ar[],int start, int len);
int mini(int ar[],int start, int len);
main()
{
	int ar[Max_Size];
	int i,max,min,len;
	
	
	printf("\nEnter the size of array :");
	scanf("%d",&len);
	
	printf("Enter the elements of array :");
	for(i=0;i<len;i++)
	{
		scanf("%d",&ar[i]);
	}
    max = maxi(ar,0,len);
    min = mini(ar,0,len);



   	printf("\n%d",max);	
    printf("\n %d",min);
}

int maxi(int ar[], int start, int len)
{
	int max;
	if(start>=len-2)
	{
		if(ar[start]>ar[start+1])
		{
			return ar[start];
		}
		else
		{
			return ar[start+1];
		}
		
	}
	
	max = maxi(ar,start+1,len);

	
	if(ar[start]>max)
	{
		return ar[start];
	}
	else
	{
		return max;
	}
}

int mini(int ar[], int start, int len)
{
	int min;
	
	if(start>=len-2)
	{
		if(ar[start]<ar[start+1])
		{
			return ar[start];
		}
		else
		return ar[start+1];
	}
	
	min = mini(ar,start+1,len);
	
	if(ar[start]<min)
	{
		return ar[start];
		
	}
	else
	{
		return min;
	}
}
