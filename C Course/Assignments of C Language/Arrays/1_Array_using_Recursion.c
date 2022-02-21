#include <stdio.h>
#define Size 10

int printarray(int A[], int n, int len)

{
    if (n < len)
    {
        printf("The element at positon %d is %d\n", n + 1, A[n]);
        printarray(A, n + 1, len);
    }
}
int main()
{
    int array[Size];
    int len;
    printf("Enter the siZe of array");
    scanf("%d", &len);

    for (int i = 0; i < len; i++)
    {
        scanf("%d", &array[i]);
    }

    printarray(array, 0, len);
    return 0;
}