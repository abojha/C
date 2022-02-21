#include<stdio.h>
#define Size 10
int main()
{
    int array[Size];

    int *ptr = array;
    int *ptrend;

    printf("Enter the elements in array:\n");

    for(int i = 0; i < Size; i++)
    {
        scanf("%d",(ptr + i));
    }

    ptrend = &array[Size - 1];
    
    printf("Array before reverse\n");
     for(int i = 0; i < Size; i++)
    {
        printf("%d\t",*(ptr + i));
    }
    printf("\n");

    printf("Array After Reverse\n");


    for(int i = 0; i < Size; i++)
    {
        printf("%d\t",*(ptrend - i));
    }
    
    return 0;
}