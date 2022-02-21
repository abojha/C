#include<stdio.h>
struct student 
{
    int roll;
    float grade;
    char name[50];
};
main()
{
    struct student e;
    FILE *fp;
    char ch = 'y';
   

    fp = fopen("File4.txt","wb");
    if(fp==NULL)
    {
        printf("File can not be open");
    }

    while(ch=='y')
    {
        printf("Enter the name, roll no., grade");
        scanf("%s %d %f",e.name,&e.roll,&e.grade);
        fwrite(&e,sizeof(e),1,fp);
        printf("Do you want add more records (y/n)");
        ch = getche();
    }
    fclose(fp);





}