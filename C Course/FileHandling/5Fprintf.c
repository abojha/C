#include<stdio.h>
struct  student
{
    char name[50];
    int id;
    int marks;
};
main()
{
    struct student e;
      char a='y';
    FILE *fp;

    fp = fopen("File3.txt","w");
    if(fp==NULL)
    {
        printf("File can not be open");
    }
    
    while(a=='y')
    {
        printf("Enter the id");
        scanf("%d",&e.id);
        printf("Enter the name");
        scanf("%s",e.name);
        printf("Enter the marks");
        scanf("%d",&e.marks);
        
        fprintf(fp,"%d\t %s\t %d\n",e.id,e.name,e.marks);
        printf("\n.....................\n");
        printf("Do you want to continue (Y/N)\n");
        a = getch();

    }
    fclose(fp);
}