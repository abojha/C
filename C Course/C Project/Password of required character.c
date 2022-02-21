#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	
	
	char a[100],b[100];
    int i;

printf("Enter a password:\n");

gets(a);


i = strlen(a);

if(i<8)
{
	printf("\nPassword must have 8 characters");
}
else
      {
	printf("\nPassword saved successfully");
	
           }
       }
	
     
    
