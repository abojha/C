#include<stdio.h>
#include<conio.h>
struct student{
	int id;
	int name;
	int marks[3];
};

main()
{
	struct student s1;
	int i;
	{
		
		printf("Enter student name : ");
	
	    scanf("%s",&s1.name);
	    fflush(stdin);
	   
		printf("Enter student id : ");
		scanf(" \n%d",&s1.id);
		
		for(i=0;i<3;i++)
		{
			printf("Enter marks[%d] : ",i);
			scanf("\n%d",&s1.marks[i]);
		}
	}
}
