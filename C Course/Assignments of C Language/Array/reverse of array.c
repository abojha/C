#include<stdio.h>
main()
{
   int a[100],b[100];
   int i,j,k=0,size;
   
  printf("\nEnter the size of array:");
  scanf("%d",&size);
  
  printf("\nEnter the elements of array:");
  for(i=0;i<size;i++)
  {
  	scanf("%d",&a[i]);
  }
  
  
  for(j=size-1;j>=0;j--)
  {
  	printf("%d\t",a[j]);
  }
  
  
}
	
	
