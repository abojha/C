#include<stdio.h>
main()
{
    char ch[100];
    FILE *fp;
    int i;

    fp = fopen("File2.txt","w");
    if(fp==NULL)
    {
        printf("File can not be open");

    }
    printf("Enter a string");
    gets(ch);

    fputs(ch,fp);

    fclose(fp);


}