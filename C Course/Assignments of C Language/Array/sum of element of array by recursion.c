#include<stdio.h>
#define Max_Size 100

int printarray(int ar[],int start,int len);

main()
{
	int ar[Max_Size];
	int i,len;
	
	printf("Enter the size of array : ");
	scanf("%d",&len);
	
	printf("\nEnter the element of array : ");
	for(i=0;i<len;i++)
	{
		scanf("\n %d",&ar[i]);
	}
	
printf("\n the sum of elements of array is : %d",printarray(ar,0,len));
}

int printarray(int ar[],int start,int len)
{
	if (start>=len)
	{
		return 0;
	}
	
  return ar[start] + printarray(ar,start+1,len);
}
