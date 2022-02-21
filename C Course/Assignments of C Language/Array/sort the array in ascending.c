#include<stdio.h>
main()
{
	int a[100];
	int i,j,temp;
	int size;
	printf("\n Enter the size of array:");
	scanf("%d",&size);
	
	printf("\nEnter the elements of array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}	
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
			   temp = a[i];
			   a[i]=a[j];
			   a[j]=temp;
			}
		}
	}
	
for(i=0;i<size;i++)
    {
    	printf("%d",a[i]);
	}
}
