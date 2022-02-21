#include<stdio.h>

int sumofarray(int a[], int n)
{
if(n<0)
{
    return 0;
}
    return a[n] + sumofarray(a,n-1);
}
int main()
{
    int array[10];

   printf("Enter the elements of array:\n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&array[i]);
    }
    int sum;
    sum = sumofarray(array,9);
    printf("%d",sum);

    return 0;
}