//********************** C Program to Interchange the diagonal of Matrix *********************
#include<stdio.h>
#define Size 3
int main()
{
    int A[Size][Size];
    int row,col,tem;

    printf("\nEnter the elements of matrix\n");
    for ( row = 0; row < Size; row++)
    {
        for(col = 0; col < Size; col++)
        {
             scanf("%d",&A[row][col]);
        }
       
    }

    printf("\nThe Matrix is:\n");
    for ( row = 0; row < Size; row++)
    {
        for(col = 0; col < Size; col++)
        {
            printf("%d\t",A[row][col]);
        }
        printf("\n");
    }
   
   for(row = 0; row < Size; row++)
   {
       col = row;
       tem = A[row][col];
       A[row][col] = A[row][(Size - col)-1];   // To interchange the diagonal
         A[row][(Size-col)-1] = tem;           // col = (size - col)

   }

     printf("\nThe Matrix is:\n");
    for ( row = 0; row < Size; row++)
    {
        for(col = 0; col < Size; col++)
        {
            printf("%d\t",A[row][col]);
        }
        printf("\n");
    }
    
    
    return 0;
}