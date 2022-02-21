#include<stdio.h>
#include<string.h>
void printfile(FILE *fp);
void deleteline(FILE *sourcefile, FILE *tempfile, int const line);
int main()
{
    FILE *sourcefile;
    FILE *tempfile;
    
    int line;
    printf("nter the line which you want to delete from file");
    scanf("%d",&line);

    sourcefile = fopen("cmp2.txt","r");
    tempfile = fopen("tempfile.txt","w");
    if(sourcefile==NULL||tempfile==NULL)
    {
        printf("!!!!!!!!!Error!!!!!!!!!!!!");

    }
    else{
        printf("Files opened successfully:\n");
    }


    printf("File before deleting the line\n");
    printfile(sourcefile);

    rewind(sourcefile);
    deleteline(sourcefile,tempfile,line);

    fclose(sourcefile);
    fclose(tempfile);

    remove("cmp2.txt");
    rename("tempfile.txt","cmp2.txt");
   


    fclose(sourcefile);
    fclose(tempfile);

    sourcefile = fopen("cmp2.txt","r");
    printf("\nFile after deleting the line:\n");
    printfile(sourcefile);


    return 0;
}
void printfile(FILE *fp)
{
    char ch;
    while((ch = fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
}
void deleteline(FILE *sourcefile, FILE *tempfile, const int line)
{
    char ch[100];
    int count = 1;
    while(fgets(ch,99,sourcefile)!=NULL)
    {
        printf("%d",line);
        if(line!=count)
        {
            fputs(ch,tempfile);
           
        }
        count++;
    }
} 