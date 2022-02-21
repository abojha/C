#include<stdio.h>
#define Max_Size 100
main()
{
	int a[Max_Size];
	int i,len,countodd=0,counteven =0;
	
	
	printf("Enter the size of array:");
	scanf("%d",&len);
	
	printf("\nEnter the elements of array:");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<len;i++)
	{
	   if(a[i]%2==0)
	   {
	   	counteven++;
	   }
	   else
	   {
	   	countodd++;
	   }
	}
	printf("\nNo. of odd elements : %d",countodd);
	printf("\nNo. of even elements : %d",counteven);
	
	
	
	