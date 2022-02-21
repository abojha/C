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

    while(fread(&e,sizeof(e),1,fp )!=NULL)
    {
        printf("Name : %s\n",e.name);
        printf("Roll number : %d\n",e.roll);
        printf("Greades : %f\n",e.grade);
    }
    fclose(fp);

}