//******************* C Program to compare files*********************
#include<stdio.h>
int cmpfiles(FILE *fp1, FILE *fp2, int *line,int *col);

int main()
{
    
    int diff;
    int line,col;

    FILE *fp1,*fp2;

    fp1 = fopen("cmp1.txt","r");
    fp2 = fopen("cmp2.txt","r");
    if(fp1==NULL||fp2==NULL)
    {
        printf("Files can not be open:");
    }
    diff = cmpfiles(fp1,fp2,&line,&col);

    if(diff==0)
    {
        printf("Both files are equal");
    }
    else
    {
        printf("Both files are not equal");
        printf("Line = %d, col = %d",line,col);
    }

    fclose(fp1);
    fclose(fp2);
}
int cmpfiles(FILE *fp1, FILE *fp2, int *line, int *col)
{
    char ch1,ch2;
    *line = 1;
    *col = 0;

    do
    {
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);

        if(ch1=="\n")
        {
            *line+=1;
            *col = 0;
        }

        if(ch1!=ch2)
        {
            return -1;
        }
        *col+=1;
    } while (ch1!=EOF&&ch2!=EOF);

    if(ch1==EOF&&ch2==EOF)
    {
        return 0;
    }
    else{
        return -1;
    }
    


    
}