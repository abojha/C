#include<stdio.h>

void Merge(int *a, int *b, int *c, int m, int n)
{
    int i,j,k;
    i = j = k = 0;
    while(i < m && i < n)
    {
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    while(i < m)
    {
        c[k] =  a[i];
        k++;
        i++;
    }
    while(i < n)
    {
        c[k] = b[j];
        k++;
        j++;
    }
}
void MergeSort(int *a, int low,int high, int mid)
{
    int b[100];
    int i = low;
    int j = mid+1;
    int k = low;
    while(i <= mid && j <= high)
    {
        if(a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while(i <= mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }
    while(j <= high)
    {
        b[k] = a[j];
        j++;
        k++;
    }
    for(int i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
  
}
void Recursive_Merge_sort(int *a, int l, int h)
{
    int mid;
    if(l < h)
    {
        mid = (l + h)/2;
        Recursive_Merge_sort(a, l, mid);
        Recursive_Merge_sort(a,mid+1,h);
        MergeSort(a,l,h,mid);
    }

}
void printArray(int *A, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
int main()
{
    int a[] = {10,23,14,16,22};
    printArray(a,5);
    Recursive_Merge_sort(a,0,4);
    printArray(a,5);

    return 0;
}