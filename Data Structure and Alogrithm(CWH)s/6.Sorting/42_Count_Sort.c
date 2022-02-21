#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void printArray(int *A, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
int maximum(int A[], int n)
{
    int max = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}
void CountSort(int *a, int n)
{
    int i,j;
    //Find the maximum element in a;
    int max = maximum(a,n);

    int *count = (int *) malloc(max + 1 * sizeof(int));
    for(i = 0; i < max+1; i++)
    {
        count[i] = 0;
    }
    for(i = 0; i < n; i++)
    {
        count[a[i]] = count[a[i]] + 1;
    }
    
    i = 0; j = 0;

    while(i < max+1)
    {
        if(count[i] > 0)
        {
            a[j] = i;
            count[i]--;
            j++;
        }
        else
        {
            i++;
        }
    }


}
int main()
{
    int a[] = {10,23,14,6,22};
    printArray(a,5);
    CountSort(a,5);
    printArray(a,5);

    return 0;
}