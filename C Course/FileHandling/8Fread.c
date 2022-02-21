#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    float grade;
};
main()
{
    struct student e;
    FILE *fp;
   
    fp = fopen("File4.txt","rb");
    if(fp==NULL)
    {
        printf("File can open");
    }

    while(fread(&e,sizeof(e),1,fp)!=NULL)
    {
       printf("%s %d %f",e.name,e.roll,e.grade);
    }
    fclose(fp);

}