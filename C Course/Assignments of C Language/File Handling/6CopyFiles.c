#include<stdio.h>
main()
{
    FILE *sourcefile;
    FILE *destinationfile;

    char ch[1000];


 sourcefile =    fopen("cmp1.txt","r");
 destinationfile =    fopen("cmp2.txt","w");
   // ch = fgetc(sourcefile);
  //ch!=EOF)
  //
  //
  //
  //
  //
  //fputc(ch,destinationfile);
  //  ch = fgetc(sourcefile);
  
  while(fgets(ch,999,sourcefile)!=NULL)
  {
      fputs(ch,destinationfile);
      printf("%s",ch);
  }


  fclose(sourcefile);
  fclose(destinationfile);
} 



