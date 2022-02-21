//////******************C Program to create file and write data in file by using fgets and fputs*****************

#include<stdio.h>
#define DATA_SIZE 1000
main()
{
    char ch[DATA_SIZE];
   
    FILE *fp;

    fp = fopen("cmp2.txt","w");
    if(fp==NULL)
    {
        printf("File can not open!!!Error");
    }
    printf("\nEnter the content in the file:\n");
    fgets(ch,DATA_SIZE,stdin);

    fputs(ch,fp);

    fclose(fp);

    printf("File created and saved successfully:");
}


//*********write in file**************
  /*#include<stdio.h>
#include<stdlib.h>
main()
{
    int array[10];
    int i;
    FILE *fp;
    fp = fopen("File1.txt","w");
    if(fp==NULL)
    {
        printf("File can not open");
    }

    printf("File opened successfully:\n");

    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<10;i++)
    {
        fprintf(fp,"%d\t",array[i]);
    }
    printf("File saved successfully");
    fclose(fp);
}
*/
