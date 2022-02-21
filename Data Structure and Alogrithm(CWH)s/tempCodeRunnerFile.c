#include<stdio.h>

void printArray(int *A, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void insertionSort(int *a, int n)
{
    int key,j;
    for(int i = 0; i < n-1; i++) // Number of passes n-1
    {
        key = a[i+1];
        j = i;
        while(j >=0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}
int main()
{
    int arr[] = {12,54,65,7,23,9};
   
    int n = 6;
    printArray(arr,n); //Printing the array before sorting
    insertionSort(arr,n);
    printArray(arr, n); //Printing the array after sorting
    return 0;
}