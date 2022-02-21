#include<stdio.h>
#include<string.h>
void removeall(char *array, char *word);
int main()
{
    char array[100];
    char word[50];
    printf("Enter the word which you want to remove");
    gets(word);
    FILE *sourcefile, *destinationfile;

    sourcefile = fopen("cmp1.txt","r");
    destinationfile = fopen("temp.txt","w");

    while(fgets(array,99,sourcefile)!=NULL)
    {
        removeall(array,word);
        fputs(array,destinationfile);
    }

    fclose(sourcefile);
    fclose(destinationfile);

    remove("cmp1.txt");
    rename("temp.txt","cmp1.txt");

    
    return 0;
}
void removeall(char *array, char *word)
{
    int i,j,k =0;
    int len,wlen;

    len = strlen(array);
    wlen = strlen(word);

    for(i = 0;i<len;i++)
    {
        k = 1;
        for ( j = 0; j < wlen; j++)
        {
            if(array[i+j]!=word[j])
            {
                k = 0;
                break;
            }
        }
        if(k==1)
        {
            for(j=i;j<len;j++)
            {
                array[j]= array[j+wlen];
            }
            len = len -wlen;
            i--;
        }
        
    }
}