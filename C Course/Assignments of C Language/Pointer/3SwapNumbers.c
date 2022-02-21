//********************* C Program to Swap two numbers by using pointer***********************
#include<stdio.h>
void swap(int *ptr1, int *ptr2);
int main()
{
    int num1;
    int num2;

    printf("Enter the first number:");
    scanf("%d",&num1);

    printf("Enter the second number:");
    scanf("%d",&num2);

    printf("\nNumber before Swapping\n");
    printf("number 1 = %d",num1);
    printf("\nnumber 2 = %d",num2);

    swap(&num1,&num2);

    printf("\nnumber after Swapping\n");
    printf("number 1 = %d",num1);
    printf("\nnumber 2 = %d",num2);
    return 0;
}

void swap(int *ptr1, int *ptr2)
{
    int temp;

    temp = *ptr1;

    *ptr1 = *ptr2;

    *ptr2 = temp;

     printf("\nnumber after Swapping im swap function\n");
    printf("number 1 = %d",*ptr1);
    printf("\nnumber 2 = %d",*ptr2);


}