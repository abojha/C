#include<stdio.h>
#include<conio.h>
main()

{
   int a = 17;
   int b = 5;
   int c = a + b;

   printf("c = a + b = %d + %d = %d",a,b,c);

   c = a - b;
   printf("\nc = a - b = %d - %d = %d",a,b,c);


    c = a*b;
    printf("\nc = a * b = %d * %d = %d",a,b,c);

    c = a / b;
    printf("\nc = a / b = %d / %d = %d",a,b,c);

    c = a % b;
    printf("\nreminder = %d",c);

}
