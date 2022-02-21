//*******C Program to find the Sum of Two Matrices*******

#include<stdio.h>
 int Size = 3;
main()
{
	int A[Size][Size]; //Matrix1
	int B[Size][Size]; //Matrix2
	int C[Size][Size]; //Resultant Matrix
	
	int row,col;

    printf("Enter the elements in Matrix A of size 3*3\n");	
	for(row=0;row<Size;row++)
	{
		for(col=0;col<Size;col++)
		{
			scanf("%d", &A[row][col]);
		}
	}
	
	printf("Enter the elements in Matrix B of size 3*3\n");	
	for(row=0;row<Size;row++)
	{
		for(col=0;col<Size;col++)
		{
			scanf("%d", &B[row][col]);
		}
	}
	
   
	for(row=0;row<Size;row++)
	{
		for(col=0;col<Size;col++)
		{
			C[row][col]=A[row][col]+B[row][col];
		}
	}
	
	
	for(row=0;row<Size;row++)
	{
		for(col=0;col<Size;col++)
		{
			printf("%d\t", C[row][col]);
		}
		printf("\n");
	}
}