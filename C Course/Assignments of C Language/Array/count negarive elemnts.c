#include<stdio.h>
#define Max_Size 100
main()
{
	int a[Max_Size];
	int i,len,countneg=0;
	
	
	printf("Enter the size of array:");
	scanf("%d",&len);
	
	printf("\nEnter the elements of array:");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<len;i++)
	{
	   if(a[i]<0)
	   {
	   	countneg++;
	   }
	}
	printf("\nNo. of negative elemnts %d",countneg);
	
	
}
