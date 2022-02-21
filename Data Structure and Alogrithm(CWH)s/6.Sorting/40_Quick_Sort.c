#include<stdio.h>
void printArray(int *A, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
int partition(int *a, int low, int high)
{
    int temp;
    int pivot = a[low];
    int i = low+1;
    int j = high;
    do{
        while(a[i] <= pivot)
    {
        i++;
    }
    while(a[j] > pivot)
    {
        j--;
    }
    if(i<j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    }while(i<j);
    //Swap a[low] and a[j]
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
void QuickSort(int *a, int low, int high)
{
    int PartitionIndex; //Index of pivot after partition
    if(low < high)
    {
        PartitionIndex = partition(a,low,high);
        QuickSort(a,low,PartitionIndex-1); // partition left sub array
        QuickSort(a,PartitionIndex+1, high); //partition right sub array
    }
   

}
int main()
{
     int arr[] = {12,54,65,7,23,9};
   
    int n = 6;
    printArray(arr,n);
    QuickSort(arr,0,n-1);
    printArray(arr,n);
      
    return 0;
}
