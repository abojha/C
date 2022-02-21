#include<stdio.h>
#include<conio.h>
main()
{
   int a;

   printf("Enter an integer number\n");
   scanf("%d",&a);

   (a % 2 == 0) ? (printf("%d is even number\n",a)) :
       printf("%d is odd number\n",a);


}
