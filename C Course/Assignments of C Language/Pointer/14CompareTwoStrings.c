//**************** C Program to Compare two String by Pointer *******************************
#include<stdio.h>
int res(char *str1, char *str2);
int main()
{

     char s1[100],s2[100];
     int result;

    printf("Enter the string 1\n");

    gets(s1);

    printf("enter the string 2\n");
    gets(s2);

   result =  res(s1,s2);

    if(result == 0)
    {
        printf("strings are equal");
    }

    else{
        printf("Stringa are not equal");

    }
    return 0;
}
int res(char *str1, char *str2)
{
    while((*str1&&*str2)&&(*str1 == *str2))
    {
        str1++;
        str2++;
    }

    return *str1 - *str2;
}