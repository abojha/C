//******************* C Program to create and initialize pointer*****************************

#include<stdio.h>

int main()
{
  // char character = 'y';
  // int integer = 1;
  // float fl = 3.14;
  // 

  // printf("Value of character  = %c, Address of character = %u",character,&character);
  // printf("\nValue of Integer = %d and Address of integer = %u",integer,&integer);
  // printf("\nValue of float = %f and Address of float = %u",fl,&fl);


  int a = 3;

  int *ptr;

  ptr = &a;

  printf("\nValue of a = %d",a);
  printf("\nValue of a = %d",*ptr);
  printf("\nAddress of a = %d",&a);
  printf("\nAddress of a = %d",ptr);

    return 0;
}