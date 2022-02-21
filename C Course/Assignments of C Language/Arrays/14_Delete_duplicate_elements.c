#include<stdio.h>

int main()
{
    int array[10];
    int count = 0;
    int size = 10;

    for(int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }

    

    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(array[i]==array[j])
            {
                
                for(int k = j; k < size - 1; k++)
                {
                    array[k] = array[k+1];
                    
                }
                size--;
                j--;
            }
        }
    }

    for(int i = 0; i < size; i++)
    {
        printf("%d\t",array[i]);
    }

    return 0;
}