#include<stdio.h>
int main()
{
   int array1[100],array2[100],mergearray[200];
   int size1,size2,mergesize;
   int index1,index2,mergeindex;
   int i;
   
   printf("Enter the size of first array:");
   scanf("%d",&size1);
   
   printf("Enter the elements of first array:");
   for(i=0;i<size1;i++)
   {
   	scanf("%d",&array1[i]);
   }
   
   printf("Enter the size of second array:");
   scanf("%d",&size2);
   
   printf("\nEnter the elements of second array:");
   for(i=0;i<size2;i++)
   {
   	scanf("%d",&array2[i]);
   }
   
   index1=0,index2=0;
   
   mergesize = size1 + size2;
   
   for(mergeindex=0;mergeindex<mergesize;mergeindex++)
   {
   	if(index1>=size1||index2>=size2)
   	{
   		break;
	}
	
	if(array1[index1]<array2[index2])
	{
		mergearray[mergeindex]=array1[index1];
		index1++;
	}
	
	else
	{
		mergearray[mergeindex]=array2[index2];
		index2++;
	}
}
	
	while(index1<size1)
	{
		mergearray[mergeindex]=array1[index1];
		mergeindex++;
		index1++;
		
	}
	while(index2<size2)
	{
		mergearray[mergeindex]=array2[index2];
		mergeindex++;
		index2++;
	}
   printf("\nmerged array in ascending order:");
   for(i=0;i<mergesize;i++)
   {
   	printf("%d\t",mergearray[i]);
   }
   
   





}
