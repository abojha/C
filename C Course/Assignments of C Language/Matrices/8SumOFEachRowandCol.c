#include<stdio.h>
#define Size 3
int main()
{
    int A[Size][Size];
    int row,col,sum =0;

    printf("Enter the elements in matrix\n");
    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            scanf("%d",&A[row][col]);
        }
    }
    printf("The matrix is:: \n");
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
        sum =0;
        for(col=0;col<Size;col++)
        {
            sum = sum+A[row][col];
        }
        printf("The sum of every element of row %d is %d\n",row+1,sum);
    }
    for(row=0;row<Size;row++)
    {sum =0;
            for(col=0;col<Size;col++)
        {
            sum = sum+ A[col][row];
        }
        printf("The sum of every element of column %d is %d\n",row+1,sum);
    }


    return 0;
}