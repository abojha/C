#include<stdio.h>

void printArray(int *A, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void bubbleSort(int *A, int n)
{
    int temp;
    int isSorted = 0;
    for(int i = 0; i < n-1; i++) // number of passes
    {
        printf("Working on pass number %d\n", i+1);
        isSorted = 1;
        for(int j = 0; j < n-1-i; j++) //for number of comparison in each pass
        {
            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted)
        {
            return;
        }
    }
}
int main()
{
    // int arr[] = {12,54,65,7,23,9};
    int arr2[] = {1,2,3,4,5,6};
    int n = 6;
    printArray(arr2,n); //Printing the array before sorting
    bubbleSort(arr2, n);
    printArray(arr2, n); //Printing the array after sorting
    return 0;
}