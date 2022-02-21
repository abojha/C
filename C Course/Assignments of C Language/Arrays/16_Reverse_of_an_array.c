#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size of an array:\n");
    scanf("%d",&size);

    int array[size];
   
    printf("Enter the element:\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i = 0; i < size; i++)
    {
        printf("%d\t",array[i]);
    }

    for(int i = size-1; i >= 0; i--)
    {
        printf("\n%d\t",array[i]);
    }
    return 0;
}