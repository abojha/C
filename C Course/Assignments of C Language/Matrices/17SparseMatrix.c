//******************* C Program to find the Sparse Matrix **************************
//Sparse Matrix :- Those Matrix whose most of the elements are zero. Consider if in any matrix the
// (i*j)/2 elements are zeroes then that is a sparse Matrix.

#include<stdio.h>
#define Size 3
int main()
{
    int A[Size][Size];
    int row,col,total = 0;

    printf("Enter the elements of matrix\n");
    for ( row = 0; row < Size; row++)
    {
        for ( col = 0; col < Size; col++)
        {
            scanf("%d",&A[row][col]);
        }
        
    }

    for ( row = 0; row < Size; row++)
    {
        for ( col = 0; col < Size; col++)
        {
            if(A[row][col]==0)
            {
                total++;
            }
        }
        
    }
    for ( row = 0; row < Size; row++)
    {
        for ( col = 0; col < Size; col++)
        {
            printf("%d\t",A[row][col]);
        }
        printf("\n");
        
    }

    if(total >= (row*col)/2)
    {
        printf("The given Matrix is a Sparse Matrix");
    }
    else{
        printf("The matrix is not a Sparse Matrix");
    }
    
    
    return 0;
}