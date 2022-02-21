#include<stdio.h>
struct student 
{
    int id;	
    int roll;
};

main()
{
	struct student s1;
	struct student *p1;
	p1 = &s1;
	printf("\n the value of id : %d",p1->id = 23);
	printf("the roll number  %d",p1->roll= 32);
}
