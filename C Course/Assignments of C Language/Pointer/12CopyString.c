// ********************** C Program to Copy One String to another by Pointer ********************
#include<stdio.h>
#include<string.h>
#define Size 100
int main()
{
    char txt[Size], copy[Size];
    char *str1 = txt;
    char *str2 = copy;
    
    int i;
    printf("Enter the string\n");
    gets(txt);


    for(i = 0; i < strlen(txt); i++)
    {
        *(str2) = *(str1);
        str2++;
        str1++;
    }
    *(str2) = '\0';

    printf("Original string %s",txt);
    printf("\n");
    printf("Copied String %s",copy);
    return 0;
}