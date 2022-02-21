//********** C Programme to find the Subtract of Two Matrices******************

#include<stdio.h>
int Size = 3;
main()
{
    int A[Size][Size]; //Matrix A
    int B[Size][Size]; //Matrix B
    int C[Size][Size]; //resultatn matrix
    int row,col;
     
    printf("Enter the elements of Matrix A of size 3*3\n");
    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            scanf("%d",&A[row][col]);
        }
    }

    printf("Enter the elements of Matrix B of size 3*3\n");
    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            scanf("%d",&B[row][col]);
        }
    }

    
    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            C[row][col]=A[row][col]-B[row][col];
        }
    }
    
    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            printf("%d",C[row][col]);
        }
    }
}
