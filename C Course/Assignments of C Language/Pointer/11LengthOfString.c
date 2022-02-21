//*********** C Program to find the Length of Stribng by Pointer *************************
#include<stdio.h>
#include<string.h>
#define Size 100
int main()
{
   char text[Size];
   char *str = text;
   int count = 0;

   printf("Enter the string\n");
   gets(text);
   
   while(*(str++ )!='\0')
   {
       count++;
   }

   printf("Lenght of %s is %d",text,count);
}