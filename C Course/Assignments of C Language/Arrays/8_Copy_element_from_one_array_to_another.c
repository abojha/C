#include<stdio.h>

int main()
{
    int array[10];
    int Copied_array[10];
    int countnegative = 0;
    
    printf("Enter the elements of array0\n:\n");
    
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the elements of array0\n:\n");

    printf("Your Original array is:\n");
    
    for(int i = 0; i < 10; i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");

    for(int i = 0; i < 10; i++)
    {
        Copied_array[i] = array[i];
    }

    printf("Your Copied array is:\n");

     for(int i = 0; i < 10; i++)
    {
        printf("%d\t",Copied_array[i]);
    }
    printf("\n");

        return 0;
}
