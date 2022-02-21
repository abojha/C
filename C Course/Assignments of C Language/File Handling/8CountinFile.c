//**************** C Program to find the Numbers of characters, lines and words in a files**************
#include<stdio.h>
#include<stdlib.h>
main()
{
        FILE *fp;
        char ch;
        int characters,lines,words;

        fp = fopen("Merge.txt","r");

    characters =0;
    words =0;
    lines =0;
   

   while((ch = fgetc(fp))!=EOF)
   {
       characters++;
       if(ch=='\n'||ch=='\0')
       {
           lines++;
       }
       else if(ch=='\n'||ch=='\t'||ch=='\0'||ch==' ')
       {
           words++;
       }
      
   
   }
    if(characters>0)
    {
        lines++;
        words++;
    }  
        printf("\nNo. of characters in file = %d",characters);
        printf("\nNO. of words in file = %d",words);
        printf("\nNo. of lines in file = %d",lines);


        fclose(fp);
}
