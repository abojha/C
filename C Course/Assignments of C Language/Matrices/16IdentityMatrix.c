//********************************** C Program to find the Identity Matrix **********************************

#include<stdio.h>
#define Size 3
int main()
{
    int A[Size][Size];
    int row,col,isidentity;


    printf("Enter the elements of matrix\n");

    for ( row = 0; row < Size; row++)
    {
        for ( col = 0; col < Size; col++)
        {
            scanf("%d",&A[row][col]);
        }
        
    }
    // Consider the given Matrix is identity

    isidentity = 1;
   
    for ( row = 0; row < Size; row++)
    {
        for ( col = 0; col < Size; col++)
        {
            if(row==col&&A[row][col]!=1)
            {
                isidentity = 0;
            }
            else if(row!=col&&A[row][col]!=0)
            {
                isidentity = 0;
            }
        }
        
    }
    printf("The Matrix is\n");

    for ( row = 0; row < Size; row++)
    {
        for ( col = 0; col < Size; col++)
        {
            printf("%d\t",A[row][col]);
        }
        printf("\n");
    }

    if(isidentity==1)
    {
        printf("\nThe Matrix is an identity Matrix\n");

    }
    else{
        printf("The matrix is not an identity Matrix");
    }
    
    
    return 0;
}