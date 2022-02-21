#include<stdio.h>

int main()
{
    int array[10];
    int countnegative = 0;
    
    printf("Enter the elements of array0\n:\n");
    
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the elements of array0\n:\n");
    
    for(int i = 0; i < 10; i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");

    for(int i = 0; i < 10; i++)
    {
        if(array[i]<0)
        {
           countnegative++;
        }
        
    }
    printf("Number of even elements in your array is %d\n",countnegative);


    return 0;
}