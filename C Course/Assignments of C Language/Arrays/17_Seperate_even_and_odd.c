#include<stdio.h>

int main()
{
    int array[10];
    int evenarray[10];
    int oddarray[10];
    int even_index=0, odd_index=0;

    printf("Enter the elements of array:\n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Your array is :\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d\t",array[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        if(array[i]%2==0)
        {
            evenarray[even_index] = array[i];
            even_index++;
        }
        else
        {
            oddarray[odd_index] = array[i];
            odd_index++;
        }
    }

    printf("\nYour Even array is :\n");
    for(int i = 0; i < even_index; i++)
    {
        printf("%d\t",evenarray[i]);
    }

    printf("\nYour odd array is :\n");
    for(int i = 0; i < odd_index; i++)
    {
        printf("%d\t",oddarray[i]);
    }
    return 0;
}