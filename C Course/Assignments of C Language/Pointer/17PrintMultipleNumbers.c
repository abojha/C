#include<stdio.h>
int mult(int *numbers, int n);
int main()
{
    int numbers[100];
    int N;
    scanf("%d",&N);
    int i;
    printf("The multiple of 2:\n");
    mult(numbers,N);
   for(i = 0; i < N; i++)
   {
       printf("%d\t",*(numbers + i));
   }
    return 0;
}
int mult(int *numbers, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        *(numbers + i) = 2 * (i + 1);
    }
    return *numbers;
}