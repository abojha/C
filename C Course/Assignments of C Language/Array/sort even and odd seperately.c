#include<stdio.h>
#include<limits.h>
void arrange(int array[], int len, int pivot);
void sort(int array[], int start, int end);
void Print(int array[],int len);
main()

{
	int array[100];
	int i,size;         
	int pivot = 0;
	int evencount=0;
	int oddcount=0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
	
	printf("Enter the size of array:");
	scanf("%d",&size);
	
	
	printf("\nenter the elements of array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
		
		if(array[i]&1)
		{
			oddcount++;
		}
		
		else 
		{
			evencount++;
		}
	}
	
	pivot = (evencount>oddcount)?evencount:oddcount;
	
	Print(array,size);
	
	arrange(array,size,pivot);
	
	printf("\nElements after arrranging even and odd number seperately:\n");
	Print(array,size);
	
	sort(array, pivot, size);
	
	sort(array,0,pivot);
	
	printf("\nFinal arrray");
	Print(array,size);
	
	
}

void arrange(int array[], int len, int pivot)
{
	int i,j,temp;
	for(i=0;i<pivot;i++)
	{
		if(array[i] & 1)
		{
			for(j=pivot;j<len;j++)
			{
				if(!array[i]&1)
				{
				    temp = array[i];
				    array[j]=array[i];
				    array[i]=temp;
				    break;
				}
			
			}
		}
	}
}
void sort(int array[], int start, int end)
{
	int i,j,temp,len;
	len  = start + end;
	
	for(i=0;i<len;i++)
	{
		for(j =i+1;j<len;j++)
		{
			if(array[i]>array[j])
			{
				temp = array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
}
void Print(int array[], int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		printf("%d\t",array[i]);
	}
}
