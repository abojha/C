#include<stdio.h>
#include<stdlib.h>

void CreateAnArray(int array[], int size)
{
   

    for(int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    

}
void printing(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d\n",array[i]);
    }
}
void delete_an_element(int array[], int index, int size)
{
    for(int i = index; i < size; i++)
    {
       array[i] = array[i+1];
    }
}
int main()
{
    int size = 5;
    int array[size];
  

    CreateAnArray(array,5);
    printing(array,5);
    delete_an_element(array,1,5);
    printing(array,4);
    

    return 0;
}