//************C Programme to find that Matrices are equal or not**********************
#include<stdio.h>
#define Size 3
main()
{
    int A[Size][Size]; //Matrix A
    int B[Size][Size]; //Matrix B
    int row,col,isequal;

    //Input of Matrix A from user
    printf("Enter the elements of Matrix A");
    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            scanf("%d",&A[row][col]);
        }
    }
    //Input of Matrix B from user
    printf("Enter the elements of Matrix B");
    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            scanf("%d",&B[row][col]);
        }
    }

    //Consider Matrix A and B are equal then
    isequal =1;

    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            if(A[row][col]!=B[row][col])
            {
                isequal = 0;
                break;
            }
        }
    }

    printf("Matrix A is\n");
    
    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            printf("%d\t",A[row][col]);
        }
        printf("\n");
    }
    printf("Matrix B is\n");

    
    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            printf("%d\t",B[row][col]);
        }
        printf("\n");
    }

    if(isequal==1)
    {
        printf("\nMatrix A and B are equal");
    }
    else{
        printf("\nMatrix are not equal");
    }
}
