#include<stdio.h>
main()
{
    char ch[100]="Hi HOw are yOU:";
    FILE *fp;
    int i;
    fp = fopen("File1.txt","w");

    for(i=0;i<strlen(ch);i++)
    {
        fputc(ch[i],fp);
    }
    fclose(fp);
}
