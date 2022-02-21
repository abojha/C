#include<stdio.h>
main()
{
	int a[100];
	int el,i,size,found=0;
	
	printf("Enter the size of array:");
	scanf("%d",&size);
	
	printf("\nEnter the elements of array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);	
	}
	
	printf("Enter the element which you want to search:");
	scanf("%d",&el);
	
	for(i=0;i<size;i++)
	{
		if(a[i]==el)
		{
		    found =1;
		    break;
		}
		
	
		
	}
	if(found==1)
	{
		printf("\n%d is at %d",el,i+1);
	}
	else
	{
		printf("Enter correct number");
	}
	
	
  
   
  
}
	
	
