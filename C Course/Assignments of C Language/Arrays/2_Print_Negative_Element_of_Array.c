#include<stdio.h>

int main()
{
    int array[10];
    printf("Enter the elements of array:\n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&array[i]);
    }

    for(int j = 0; j < 10; j++)
    {
        if(array[j]<0)
        {
            printf("%d\n",array[j]);
        }

    }
    return 0;
}