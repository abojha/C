//**************C Program to find the multiplication of Matrices*******************

#include<stdio.h>
#define Size 3
main()
{
    int A[Size][Size]; //Matrix A;
    int B[Size][Size]; //Matrix B;
    int C[Size][Size]; //Resultant Matrix;
    int row, col, i,sum;
    //Input Matrix A from user
    printf("Enter the elements of Matrix A of order 3*3\n");
    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            scanf("%d",&A[row][col]);
        }
    }

    
    //Input Matrix B from user
    printf("Enter the elements of Matrix B of order 3*3\n");
    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            scanf("%d",&B[row][col]);
        }
    }
    printf("\n");
    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            printf("%d\t",A[row][col]);
        }
        printf("\n");
    }
    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            printf("%d\t",B[row][col]);
       }
       printf("\n");
    }



    //Now multiply both Matrices A and B
    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            sum =0;
            for(i=0;i<Size;i++)
            {
                sum+= A[row][i]*B[i][col];
            }

            C[row][col]=sum;
        }
    }

    //now Print the resultant Matrix//

    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            printf("%d\t",C[row][col]);
        }
        printf("\n");
    }

}