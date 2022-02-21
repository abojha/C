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
            
        }
        
    }
row =0;
col=0;
  for(row=0;row<Size;row++)
  {
      for(col=0;col<Size;col++)
      {
          if(row+col == Size-1)
          {
              sum = sum+A[row][col];
          }
      }
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