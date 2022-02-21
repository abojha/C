//**************** C Program to Concatenate the string by using pointer *****************************
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    char *p1 = str1;
    char *p2 = str2;
    

    printf("Enter the string 1\n");
    gets(str1);

    printf("Enter the string 2\n");
    gets(str2);

  while(*(++p1));

  *(p1++) = ' '; 

  while(*(p1++) = *(p2++));


  printf("%s",str1);
    return 0;
}