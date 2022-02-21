// ****************** C Programme to Acces 2d by Pointer ************************

/* (Matrix + i) -----> shows the address of the rows of Matrices
    *(Matrix + i ) -----> shows the number of rows of matrix
    (*(Matrix + i)+j) ------> shows the address of elements of Matrix
    *(*(Matrix + i)+j) ------> shows the  elements of Matrix

    1 2 3 --> *(Matrix + 0)
    4 5 6 --> *(Matrix + 1)
    7 8 9 --> *(Matrix + 2)

    and

    1 --> (*(Matrix + 0)+0)
    2 --> (*(Matrix + 0)+1)
    3 --> (*(Matrix + 0)+2)
    4 --> (*(Matrix + 1)+0)
    5 --> (*(Matrix + 1)+1)
    6 --> (*(Matrix + 1)+2)
    7 --> (*(Matrix + 2)+0)
    8 --> (*(Matrix + 2)+1)
    1 --> (*(Matrix + 2)+2)
    */

#include<stdio.h>
#define  ROWS 3
#define COLS 3
void input(int Matrix[ROWS][COLS], int row, int col);
void print(int Matrix[ROWS][COLS], int row, int col);
int main()
{
    int Matrix[ROWS][COLS];

    printf("Enter the elements in %d x %d matrix",ROWS,COLS);
    input(Matrix, ROWS , COLS);

    printf("Matrix is\n");
    print(Matrix, ROWS , COLS);

    
    return 0;
}
void input(int Matrix[ROWS][COLS], int row, int col)
{
    int i,j;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j<col; j++)
        {
            scanf("%d",(*(Matrix + i)+j));
        }
    }
}
void print(int Matrix[ROWS][COLS], int row, int col)
{
    int i,j;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j<col; j++)
        {
            printf("%d",*(*(Matrix + i)+j));
        }
    }
}