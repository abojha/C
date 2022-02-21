#include<stdio.h>
#define Size 3

int main()
{
    int A[Size][Size];
    int row,col,isupper;

    printf("\nEnter the elements of Matrix\n");
    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            scanf("%d",&A[row][col]);
        }
    }
    //Conside the Matrix is Upper triangular matrix.
    isupper = 1;
    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            if(col>row&&A[row][col]!=0)
            {
                isupper = 0;
            }
        }
    }
    printf("\nMatrix\n");
    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            printf("%d\t",A[row][col]);
        }
        printf("\n");
    }

    if(isupper==1)
    {
        printf("The Matrix is lower triangular matrix\n");

    }
    else
    {
        printf("The matrix is not lower triangular matrix\n");
    }
    
    return 0;
}