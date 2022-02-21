//************** C Program to append a File******************************

#include<stdio.h>
void readfile(FILE *fp);
main()
{
    char datatoappend[100];
    FILE *fp;

    fp = fopen("Appendfile.txt","a");
    if(fp==NULL)
    {
        printf("File can not be open");
    }

    printf("File open successfully\n");
    printf("Enter the data to append in file");
    fgets(datatoappend,100,stdin);

    fputs(datatoappend,fp);
    fp = freopen("Appendfile.txt","r",fp);

    
   printf("File saved successfully\n");
   readfile(fp);
    fclose(fp);

}

void readfile(FILE *fp)
{
    char ch;
    do
    {
        ch = fgetc(fp);
        printf("%c",ch);
    }while(ch!=EOF);
    
} 