#include<stdio.h>
void print_array(int array[], int used_size)
{
    for(int i = 0; i < used_size; i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
}

void deliton_array(int array[], int index, int used_length)
{
    for(int i = index; i < used_length-1; i++)
    {
        array[i] = array[i+1];
    }
}
int main()
{
    int array[100] = {1,2,3,4,5};
    int used_size = 5;
    int index=0;
    print_array(array,used_size);
    deliton_array(array,index,used_size);
    print_array(array,used_size-1);


    return 0;
}