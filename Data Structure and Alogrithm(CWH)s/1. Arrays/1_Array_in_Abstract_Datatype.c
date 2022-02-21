#include <stdio.h>
#include<stdlib.h>

struct MyArray
{
    int total_size; //memory to be reserved.
    int used_size;  // memory to be used.
    int *ptr;       // Point first element of an array
};

void CreatArray(struct MyArray* a, int tSize, int uSize)
{
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *) malloc(tSize * sizeof(int));
}
void ShowArray(struct MyArray* a)
{
   
    for(int i = 0; i < a->used_size; i++)
    {
        printf("%d\n",a->ptr[i]);
      
    }
}
void getval(struct MyArray* a)
{
    int j;
    for(int i = 0; i < a->used_size; i++)
    {
        scanf("%d",&j);
        a->ptr[i] = j;
    }
}
void sort_array(struct MyArray* a)
{
    
}
int main()
{
    struct MyArray marks;
    CreatArray(&marks, 100,2);
    getval(&marks);
    ShowArray(&marks);

    return 0;
}