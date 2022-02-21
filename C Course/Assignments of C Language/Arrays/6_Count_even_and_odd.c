#include<stdio.h>

int main()
{
    int array[10];
    int counteven = 0;
    int countodd = 0;
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
        if(array[i]%2==0)
        {
            counteven++;
        }
        else{
            countodd++;
        }
    }
    printf("Number of even elements in your array is %d\n",counteven);
    printf("Number of odd elements in your array is %d\n",countodd);


    return 0;
}