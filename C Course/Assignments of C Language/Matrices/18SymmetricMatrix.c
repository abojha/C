#include<stdio.h>
#define Size 3
int main()
{
    int A[Size][Size];
    int B[Size][Size];
    int row,col,issym;
    printf("Enter the elements of Matrix\n");

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
            B[col][row] = A[row][col];
          

        }
        
    }


    // consider the matrix is symmetric matrix
    issym = 1;


    for ( row = 0; row < Size; row++)
    {
        for ( col = 0; col < Size; col++)
        {
            if(B[col][row] != A[row][col])
            {
                issym = 0;
                break;
            }   

        }
        
    }
    
    if(issym==1)
    {
        printf("The Matrix is Symmetric Matrix\n");
          for ( row = 0; row < Size; row++)
    {
        for ( col = 0; col < Size; col++)
        {
            printf("%d\t",A[row][col]);
        }
        printf("\n");
        
    }
    }

    else{
        printf("The Matrix is not Symmetric Matrix");
    }
  
    
    return 0;
}