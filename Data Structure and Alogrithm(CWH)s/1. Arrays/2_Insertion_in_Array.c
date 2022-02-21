#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}
void indInsertion(int arr[], int s, int el, int c,int index)
{
    if(s>=c)
    {
        return -1;
    }
    for(int i = s-1; i >=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = el;
    return 1;
}
int main()
{
    int arr[100] = {1, 2, 6, 78};
    int size = 4;
    int element = 45;
    int capacity = 100;
    int index = 3;
    display(arr, 4);
    indInsertion(arr, size, element,capacity,index);
    display(arr,5);

    return 0;
}