#include<stdio.h>
#define Max_Size 100
main()
{
	int a[Max_Size];
	int i,len,j,count;
	
	
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
				count++;
				break;
			}
		}
	}
	
	printf("%d",count);
}
