#include<stdio.h>

int main()
{
    int size1,size2,MergeSize;
    int k = 0;
   
    printf("Enter the size of first array:\n");
    scanf("%d",&size1);

    printf("Enter the size of second array:\n");
    scanf("%d",&size2);
    MergeSize = size1+size2;
    int a[size1];
    int b[size2];
    int Mergearray[MergeSize];
    

    printf("Enter the elements of first array\n");
    for(int i = 0; i < size1; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of second array\n");
    for(int i = 0; i < size2; i++)
    {
        scanf("%d",&b[i]);
    }

   
    for(int i = 0; i < size1; i++){
        Mergearray[i] = a[i];
    }
    for(int i = size1; i < MergeSize; i++)
    {
       
        Mergearray[i] = b[k];
        k++;
    }

    printf("your Merged array is \n");
    for(int i = 0; i < MergeSize; i++)
    {
        printf("%d\t",Mergearray[i]);
    }
    return 0;
}