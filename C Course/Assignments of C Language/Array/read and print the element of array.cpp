#include<stdio.h>
#define Max_Size 100
void printarray(int ar[],int start,int len);

main()
{
	int ar[Max_Size];
	int i,len;
	
	printf("Enter the length of array:");
	scanf("%d",&len);
	
	printf("Enter the elements of array:");
	for(i=0;i<len;i++)
	{
		scanf("%d",&ar[i]);
	}
	printarray(ar,0,len);
}
void printarray(int ar[],int start, int len)
{
	if(start>=len)
	{
		return ;
	}
	
	printf("\n%d",ar[start]);
	printarray(ar,start+1,len);
}
