//******************** C Programme to find the vlaue of determinant ******************************
#include<stdio.h>
#define Size 2
int main()
{
    int A[Size][Size];
    int row,col,det;

    printf("Enter the elements of Matrix:\n");

    for(row = 0; row < Size; row++)
    {
        for(col = 0; col < Size; col++)
        {
            scanf("%d",&A[row][col]);
        }
    }
    

    printf("Determinant is:\n");

    for(row = 0; row < Size; row++)
    {
        for(col = 0; col < Size; col++)
        {
            printf("%d\t",A[row][col]);
        }
        printf("\n");
    }

    det = A[0][0]*A[1][1] - A[0][1]*A[1][0];

    printf("The value of determinant:\n");
    printf("%d",det);

    
    return 0;
}