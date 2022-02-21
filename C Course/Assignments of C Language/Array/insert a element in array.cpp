#include<stdio.h>
#define Max_Size 100
main()
{
	int ar[Max_Size];
	int i,size,pos,num;
	
	printf("Enter the size of array:");
	scanf("%d",&size);
	
	printf("Enter the elements of array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ar[i]);
	}
	
	printf("\nEnter the element which you want to insert:");
	scanf("%d",&num);
	
	printf("Enter the postiton where you want to insert the element:");
	scanf("%d",&pos);
	
	for(i=0;i<size;i++)
	{
		printf("%d\t",ar[i]);
	}
	
	if(pos<=0||pos>size)
	{
		printf("Enter the correct position");
	}
	else
	{
		for(i=size;i>=pos;i--)
		{
			ar[i]=ar[i-1];
		}
		
		ar[pos-1]=num;
		size++;
	}
	printf("\n--------\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",ar[i]);
	}
}
