#include<stdio.h>
#include<conio.h>
main()
{
    char ch;
    FILE *fp;
    int i;
    fp = fopen("File1.txt","r");

    while(1)
    {
        ch = fgetc(fp);
        if(ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
}