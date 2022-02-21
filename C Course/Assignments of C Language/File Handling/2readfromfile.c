//&******************c Program to read data from file************************
/*#include<stdio.h>
#define Size 100
main()
{
    char ch[Size];
    FILE *fp;

    fp = fopen("File1.txt","r");
    if(fp==NULL)
    {
        printf("File can not be open");

    }

    while(fgets(ch,Size-1,fp)!=NULL)
    {
        printf("%s",ch);
    }
} */


//**************C prgram to read file using fputc(character by character)******
#include<stdio.h>
#define Size 100
main()
{
    char ch;
    FILE *fp;
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