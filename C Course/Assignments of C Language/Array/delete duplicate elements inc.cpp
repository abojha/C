#include<stdio.h>
#define Max_Size 100
main()
{
	int a[Max_Size];
	int i,len,j,k;
	
	
	printf("Enter the size of array:");
	scanf("%d",&len);
	
	printf("\nEnter the elements of array:");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<len-1;k++)
				{
					a[k]=a[k+1];
				}
				len--;
					j--;
			}
			
		}
	
	}
	
	printf("After deleteing all duplicate elements:");
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
