#include <stdio.h>
#include<stdlib.h>
int inputelementinarray(int *ptr, int size, int length)
{
    *ptr = (int *)malloc(size * sizeof(int));
    printf("Enter the elements\n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", (ptr + i));
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d\t", *(ptr + i));
    }
    printf("\n");
}
int linearSearch(int *ptr, int size, int length, int element)
{
    printf("This is linear SEARCH\n");
    *ptr = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < length; i++)
    {
        if (*(ptr + i) == element)
        {
           printf("The element %d is at %d place\n",element,i+1);
        }
    }
    return -1;
}
int BinarySearch(int *ptr, int size, int length, int element)
{
    printf("This is Binary SEARCH\n");
    int low = 0, mid, high = length-1;
   *ptr = (int *)malloc(size * sizeof(int));
    while(low<=high)
    {
        mid = (low+high)/2;
        if(*(ptr+mid)==element)
        {
            printf("The element %d is at %d place",element,mid+1);
            break;
        }
        else{
            if(*(ptr+mid)<element)
            {
                low = mid+1;
            }
            else{
                if(*(ptr+mid)>element)
                {
                    high = mid-1;
                }
            }
        }
    }
    return -1;
}
int main()
{
    int array;
    int size;
    int length;
    int element;

    printf("Enter the size of array\n");
    scanf("%d", &size);
    printf("Enter the length of array\n");
    scanf("%d", &length);
    inputelementinarray(&array, size, length);

    printf("Enter the elements which you want to search\n");
    scanf("%d", &element);
    
    linearSearch(&array,size,length,element);
    BinarySearch(&array,size,length,element);
    

    return 0;
}