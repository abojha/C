#include<stdio.h>
void printArray(int *A, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void selectionSort(int *a, int n)
{
    int temp;
    int indexofmin;
    for(int i = 0; i < n-1; i++)
    {
        indexofmin = i;
        for(int j = i+1; j < n; j++)
        {
            if(a[j] < a[indexofmin])
            {
                indexofmin = j;
            }
        }
        temp = a[i];
        a[i] = a[indexofmin];
        a[indexofmin] = temp;
    }
}
int main()
{
    int arr[] = {3,5,2,13,12};
    int n = 5;
    printArray(arr,n);
    selectionSort(arr,n);
    printArray(arr,n);

    return 0;
}