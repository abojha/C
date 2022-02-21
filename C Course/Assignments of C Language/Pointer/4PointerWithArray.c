// ********************** C Program to Print array by Using Pointer **********************************

#include<stdio.h>

int main()
{
    int array[10];

    int i, *ptr;

  ptr = array; //Pointer to array[0]

  for ( i = 0; i < 10; i++)
  {
      scanf("%d",(ptr+i));

 // Move Pointer to next array element
      ;
  }
// Make sure that the Pointer again points the back the first array elements.
  ptr = array;

  printf("The numbers are :\n");

  for ( i = 0; i < 10; i++)
// Print value pointe by the pointer  
    {
      printf("%d",*(ptr+i));
//Move Pointer the the next array element.
      
    }


    return 0;
}