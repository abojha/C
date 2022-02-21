#include<stdio.h>

int main()
{
    int array[10];
    int count = 0;

    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&array[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%d",array[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        for(int j = i+1; j < 10; j++)
        {
            if(array[i]==array[j])
            {
                count++;
            }
        }
    }
    printf("\n%d",count);
    return 0;
}