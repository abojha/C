#include<stdio.h>
#include<conio.h>
struct student{
	int id;
	int marks;
}s1[3];

main()
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter the student id\n");
		scanf("%d",&s1[i].id);
		
		printf("\nEnter student marks\n");
		scanf("%d",&s1[i].marks);
	}
	
	for(i=0;i<3;i++){
	
	printf("\nStudent id %d : %d",i,s1[i].id);
	printf("\nStuden marks %d : %d",i,s1[i].marks);
}
	
}