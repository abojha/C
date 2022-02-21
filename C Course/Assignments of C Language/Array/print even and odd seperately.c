#include<stdio.h>
main()
{
   int array[100],oddarray[100],evenarray[100];
   int i,j,oddindex=0,evenindex=0,size;
 
   
   
   printf("Enter the size of array:");
   scanf("%d",&size);
   
   printf("\nEnter the elements of array:");
   for(i=0;i<size;i++)
   {
   	scanf("%d",&array[i]);
	}
   
   for(j=0;j<size;j++)
   {
   	if(array[j]%2==0)
   	{
   		evenarray[evenindex]=array[j];
   		evenindex++;
	}
	
	else
	{
		oddarray[oddindex]=array[j];
	    oddindex++;
	}
   }
   
   printf("\nEven array:");
   for(i=0;i<evenindex;i++)
   {
   	 printf("%d\t",evenarray[i]);
   }
   
   printf("\nodd array:");
   for(i=0;i<oddindex;i++)
   {
   	printf("%d\t",oddarray[i]);
   }
  
}
	
	
