//******************C Program to perform Scalar Matrix Multiplication********************************

#include<stdio.h>
main()
{
    int A[3][3];  // A Matrix
    int row, col, num;

    printf("Enter the values of Matrix A of order 3*3:\n");
    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            scanf("%d",&A[row][col]);
           
        }
       
    }

    printf("Enter the number which you want to multiply with matrix A:\n");
    scanf("%d",&num);

    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            A[row][col] = num*A[row][col];          
        }
    }

    printf("The resultant matrix is:\n");
    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            printf("%d\t",A[row][col]);
            
        }
        printf("\n");
    }
}