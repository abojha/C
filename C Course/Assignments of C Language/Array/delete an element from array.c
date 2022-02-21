#include<stdio.h>
#define Max_Size 100
main()
{
	int a[Max_Size];
	int i,pos,size;
	
	
	printf("Enter the size of array:");
	scanf("%d",&size);
	
	printf("\nEnter the element of array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("\nThe initial array:");
	for(i=0;i<size;i++)
	{
		printf("\n%d",a[i]);
	}
	
	printf("\nenter the position of which element you want to remove:");
	scanf("%d",&pos);
	
	for(i=pos-1;i<size-1;i++)
	{
		a[i]=a[i+1];
	}
	size--;
	printf("The final array:");
	for(i=0;i<size;i++)
	{
		printf("\n%d",a[i]);
	}
	
	
	
	
	
	
	
}
