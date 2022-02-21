//***************** C Proram to Multiply two Matrices by Pointer ***************************
#include<stdio.h>
#define Rows 3
#define Cols 3
void matr(int mat[Rows][Cols]);
void multiply(int mat1[][Cols], int mat2[][Cols],int res[][Cols]);
void print(int mat[][Cols]);
int main()
{
    int mat1[Rows][Cols];
    int mat2[Rows][Cols];
    int res[Rows][Cols];
    printf("Enter the input of Matrix 1\n");
    matr(mat1);

    printf("Enter the inputs of Matrix 2\n");
    matr(mat2);
    printf("Matrix 1 is \n");
    print(mat1);

    printf("Matrix 2 is\n");
    print(mat2); 

    multiply(mat1,mat2,res);

    printf("Resultant Matrix\n");

    print(res);
    
    return 0;
}
void matr(int mat[Rows][Cols])
{
    int row,col;

    for(row = 0; row < Rows; row++)
    {
        for(col = 0; col < Cols; col++)
        {
            scanf("%d",(*(mat+row)+col));
        }
    }
}
void multiply(int mat1[][Cols], int mat2[][Cols],int res[][Cols])
{
    int row,col,i,sum = 0;

    for(row = 0; row < Rows; row++)
    {
        for(col = 0; col < Cols; col++)
        {
            sum = 0;
            for(i = 0; i < Cols; i++)
            {
                sum += (*(*(mat1+row)+i))*(*(*(mat2 + i)+col));
            }
            *(*(res + row)+col) = sum;
        }
    }


}
void print(int mat[][Cols])
{
     int row,col;

    for(row = 0; row < Rows; row++)
    {
        for(col = 0; col < Cols; col++)
        {
            printf("%d\t",*(*(mat+row)+col));
        }
        printf("\n");
    }

}