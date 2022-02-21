#include<stdio.h>
struct student{
    char name[50];
    int id;
    int marks;
};
main()
{
    struct student e;
    FILE *fp;
    int id,flag=0;

    fp = fopen("File4.txt","rb");
      if(fp==NULL)
      {
          printf("File can not be open");
      }

      printf("Enter the roll no. of studentn\n");
      scanf("%d",&id);

      while(fread(&e,sizeof(e),1,fp)!=NULL)
      {
          if(e.id==id)
          {
              flag=1;
              printf("record is found\n");
              printf("%s %d %d",e.name,e.id,e.marks);
              
          }
      }


if(flag==0)
{
    printf("not found");
}

fclose(fp);
}
