//*********************** C Program to reverse string by using Pointer *********************
#include<stdio.h>
#include<string.h>
int main()
{
   char s1[100],s2[100];
    char *p1 = s1;
    char *p2 = s2;
    int l = 0;

    printf("Enter the string\n");
    gets(s1);

    while(*(++p1))
    {
        l++;
    }
    printf("\nlenght of string %d",l);
    while(l>=0)
    {
        *(p2++) = *(--p1);
          
        l--;
    }
    *p2 = '\0';

   printf("%s",s2);
   return 0;
}