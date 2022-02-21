#include<stdio.h>
 struct student
    {
        int id;
        char name[10];
        int marks;
    };
main()
{
    struct student e;
    FILE *fp;

    fp = fopen("File3.txt","r");
    if(fp==NULL)
    {
        printf("File can not be open");
    }

    while(fscanf(fp,"%s %d %d",e.name,&e.id,&e.marks)!=EOF)
    {
        printf("%s %d %d",e.name,e.id,e.marks);
    }
    fclose(fp);
   


}