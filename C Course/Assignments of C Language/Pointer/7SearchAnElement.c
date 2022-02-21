// ********************* C Program to Search an Elements in an Array by using Pointer ***************************
#include<stdio.h>
#define Max_Size 100
int main()
{
    int array[Max_Size];
    int size,i,f;
    int *ptr = array;
    int ele;
    int *ptrend = (array + size - 1);

    int index;
    
    printf("Enter the size of array\n");
    scanf("%d",&size);

    printf("Enter the elements in array\n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",(ptr +i));
    }

    printf("Enter an element which you want to search in array");
    scanf("%d",&ele);

    while(ptr<=ptrend && *ptr!=ele)
    {
       ptr++;
       f++;
    }

    printf("%d is found at %d position",ele,f);
    return 0;
}