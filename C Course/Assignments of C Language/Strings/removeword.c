#include<stdio.h>
#include<string.h>
void removeall(char * a,  char * word);

int main()
{
    char a[100],word[50];
    printf("Enter a string\n");
    gets(a);
    printf("Enter the word which you want to remove");
    gets(word);

    printf("\nString before removing the word is: %s",a);

    removeall(a,word);
    printf("\nString after removing the word %s is : %s",word,a);
    
    return 0;
}
void removeall(char * a,  char * word)
{
    int i,j,k=0;
    int len,wlen;

    len = strlen(a);
    wlen = strlen(word);

    for(i=0;i<len;i++)
    {
        k=1;
        for(j=0;j<wlen;j++)
        {
            if(a[i+j]!=word[j])
            {
                k=0;
                break;
            }
        }
        if(a[i+j]=='\n'&&a[i+j]=='\t'&&a[i+j]==' '&&a[i+j]=='\0')
        {
                k = 0;
        }
        if(k==1)
        {
            for(j=i;j<len;j++)
            {
                a[j] = a[j+wlen];

            }
            len = len - wlen;
            i--;
    }
        }
       
}