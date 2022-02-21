#include<stdio.h>
#define Size 10
int main()
{
    int sourcearr[Size];
    int destinationarr[Size];

    int *sourceptr=sourcearr;
    int *destinationptr= destinationarr;



    printf("Enter the elements of array:\n");

    for(int i = 0; i<Size; i++)
    {
        scanf("%d",(sourceptr+i));
    }    

    int *endpointer;

    endpointer = &sourcearr[Size-1];

   
  for(int i=0;i<Size;i++)
    {
        printf("%d\t",*(sourceptr+i));
    }
    printf("\n"); 


    while(sourceptr<=endpointer)
    {
        *destinationptr = *sourceptr;

        destinationptr++;
        sourceptr++;
    }

    sourceptr = sourcearr;
       for(int i=0;i<Size;i++)
    {
        printf("%d\t",*(sourceptr+i));
    }
    printf("\n"); 


    for(int i=0;i<Size;i++)
    {
        printf("%d\t",*(destinationptr+i));
    }

    return 0;
}