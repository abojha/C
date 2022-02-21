#include<stdio.h>
#define Size 3

int main()
{
    int A[Size][Size]; //Matrix;
    int row,col,sum=0;

    //Input elements of Matrix

    printf("Enter the elements of Matrix of order 3*3\n");
    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            scanf("%d",&A[row][col]);
            printf("\t");
        }
        printf("\n");
    }

    //Sum up the elements in diagonal of Matrix

    for(row=0;row<Size;row++)
    {
        sum = sum + A[row][row];
    }

    //Print the resultant Matrix

    printf("The resultant Matrix is\n");
    {
        for(row=0;row<Size;row++)
        {
            for(col=0;col<Size;col++)
            {
                printf("%d\t",A[row][col]);
            }
            printf("\n");
        }
    }

    printf("\nSum of Diagonal is %d",sum);
    
    return 0;
}