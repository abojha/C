#include<stdio.h>
#define Size 100
int main()
{
    int array[Size];
    int used_size = 5;
    int index;
    int place;
    
    printf("Enter the elements of array:\n");

    for(int i =  0; i < used_size; i++)
    {
        scanf("%d",&array[i]);
    }

    for(int i = 0; i < used_size; i++)
    {
        printf("%d\t",array[i]);
    }

    printf("Enter the place where you want to print:\n");
    scanf("%d",&place);

   index = place-1;
    used_size++;

    for(int i = used_size-1; i >= index; i--)
    {
        array[i] = array[i-1];
    }
    array[index] = 5;

    for(int i = 0; i < used_size; i++)
    {
        printf("%d\t",array[i]);
    }

   

    return 0;
}