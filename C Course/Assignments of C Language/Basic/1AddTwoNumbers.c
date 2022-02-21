//************** C Program to add two Numbers *************************

#include<stdio.h>

int main()
{
    //swapping of two numbers
    int a = 5;
    int b = 10;
    cout<<a<<b<<endl;
    int temp; //temp variable to store values temporarily

    temp = a;
    a = b;
    b = a;

    cout<<a<<b;
    return 0;
}