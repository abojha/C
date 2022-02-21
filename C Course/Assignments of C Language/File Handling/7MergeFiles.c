//************* C Program to Merge two Files to the Third Files *****************************

#include<stdio.h>
main()
{
    char ch[1000];

    FILE *sourcefile1,*sourcefile2,*destinationfile;

    sourcefile1 = fopen("cmp1.txt","r");
    sourcefile2 = fopen("cmp2.txt","r");
    destinationfile = fopen("Merge.txt","w");

    while(fgets(ch,999, sourcefile1)!=NULL)
    {
        fputs(ch,destinationfile);
    }
    while(fgets(ch,999,sourcefile2)!=NULL)
    {
        fputs(ch,destinationfile);
    }
    printf("Both Files get Merged suceessfullyl");

    fclose(sourcefile1); 
    fclose(sourcefile2);
    fclose(destinationfile);
}