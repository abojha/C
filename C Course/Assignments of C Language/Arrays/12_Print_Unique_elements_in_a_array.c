#include<stdio.h>

void creata_an_array(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
}

void print_an_array(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\t",array[i]);
    }
}
void Print_an_unique_one(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int count = 1;
        for(int j = i+1; j < n; j++)
        {
            if(array[i]==array[j])
            {
                count++;
            }
        }
        if(count == 1)
        {
            printf("%d",array[i]);
        }
        
    }
}
int main()
{
    int array[10];

    creata_an_array(array,10);
    Print_an_unique_one(array,10);


    return 0;
}