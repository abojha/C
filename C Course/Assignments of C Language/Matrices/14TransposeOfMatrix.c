#include<stdio.h>
#define Size 3
int main()
{
    int A[Size][Size];
    int row,col;

    printf("Enter the elements of Matrix\n");

    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            scanf("%d",&A[row][col]);
        }
    }
    

  // for(row=0;row<Size;row++)
    //{
      //  for(col=0;col<Size;col++)
        //{
          // A[col][row]=A[row][col];
        //}
    //}
    
    printf("The Matrix is\n");
    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            printf("%d\t",A[col][row]);
        }
        printf("\n");
    }
    
    return 0;
}