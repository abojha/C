#include<stdio.h>
main()
{
    char ch[100];
    FILE *fp;

    fp = fopen("File2.txt","r");
    if(fp==NULL)
    {
        printf("File can not be open");
    }

    while(fgets(ch,99,fp)!=NULL)
    {
      printf("%s",ch);

    }
    fclose(fp);
}