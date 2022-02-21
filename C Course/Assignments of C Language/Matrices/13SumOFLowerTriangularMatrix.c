//********************* C Program to find the sum of Lower triangular Matrix***************

#include<stdio.h>
#define Size 3
int main()
{
    int A[Size][Size];
    int row,col,sum=0,islower;

    printf("Enter the elements of Matrix\n");
    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            scanf("%d",&A[row][col]);
        }
    }

    printf("The Matrix is\n");

    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            printf("%d\t",A[row][col]);
        }
        printf("\n");
    }


    islower=1;

    for(row=0;row<Size;row++)
    {
        for(col=0;col<Size;col++)
        {
            if(col>row&&A[row][col]!=0)
            {
                islower=0;
            }
        }
    }

  //}

    if(islower==1)
    {
        for(row=0;row<Size;row++)
        {
            for(col=0;col<Size;col++)
            {
                if(row>col)
                {
                    sum+=A[row][col];
                }
            }
        }
        printf("The sum of Lower Triangular Matrix is %d",sum);
    }

    

    
    return 0;
}