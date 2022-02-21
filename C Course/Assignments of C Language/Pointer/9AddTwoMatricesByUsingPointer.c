// ************** C Program to add two Matrix by using pointer ******************************
#include<stdio.h>
#define ROWS 3
#define COLS 3
void input(int mat[ROWS][COLS], int row, int col);
void addmat(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int res[ROWS][COLS], int row, int col);
void print(int mat[ROWS][COLS], int row, int col);
int main()
{
    int mat1[ROWS][COLS], mat2[ROWS][COLS], res[ROWS][COLS];

    printf(" Enter the elements of Matrix 1 is\n");
    input(mat1, ROWS, COLS);

    printf("Enter the elements of matrix 2 is \n");
    input(mat2, ROWS, COLS);

    addmat(mat1, mat2, res, ROWS, COLS);

    printf("\nMatrix 1 is\n");
    print(mat1,ROWS,COLS);

    printf("\nMatrix 2 is\n");
    print(mat2,ROWS,COLS);

    printf("Resultant is \n");
    print(res, ROWS, COLS);
    
    return 0;
}
void input(int mat[ROWS][COLS], int row, int col)
{
    int i,j;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d",(*(mat + i)+j));
        }
    }
}
void addmat(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int res[ROWS][COLS], int row, int col)
{
    int i,j;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            *(*(res+i)+j) = *(*(mat1 + i)+j) + *(*(mat2 + i)+j);
        }
    }
}
void print(int mat[ROWS][COLS], int row, int col)
{
    int i,j;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t",*(*(mat + i)+j));
        }
        printf("\n");
    }
}