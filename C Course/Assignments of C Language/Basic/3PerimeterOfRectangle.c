#include<stdio.h>

int main()
{
    int l,b;
    int per;

    printf("Enter the Length of Rectangle\n");
    scanf("%d",&l);

    printf("Enter the breadth of Rectangle\n");
    scanf("%d",&b);

    per = 2*(l+b);

    printf("The Perimeter of Rectangle of lenght %d units and Breadth %d units is %d units",l,b,per);

    return 0;

}