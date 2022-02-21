#include<stdio.h>

int main()
{
    int a[10];
    int *p = a;
    int i,j;
    int temp;
    printf("Enter the array ");

    for(int i = 0; i < 10; i++)
    {
        scanf("%d",(p+i));
    }

    for(i = 0; i < 10; i++)
    {
        for(j = i+1; j < 10; j++)
        {
            if(*(p+i)> *(p+j))
            {
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }

    for(int i = 0; i < 10; i++)
    {
       printf("%d",*(p+i));
    }
    
    return 0;
}