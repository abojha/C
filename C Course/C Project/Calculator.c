#include<stdio.h>
#include<conio.h>
main()
{ 
	float a;
	float b;
	float r;
	char d;
	char choice = 'y';
	while(choice=='y'||choice=='Y')
	{
	
	printf("Enter the first number\n");
	scanf("%f",&a);
	
	printf("Enter the operation\n");
	scanf(" %s",&d);
	
	printf("Enter the second number\n");
	scanf("%f",&b);
	
	switch(d)
	{
		case '+':
			r = a + b;
			
			break;
			
		case '-':
			r = a - b;
			
			break;
			
		case '*':
			r = a * b;
			
			break;
		
		case '/':
			r = a / b;
		
			break; 
			
		default :
			printf("Enter the correct operation");
			break;
			
		
		
		
		
	}
		printf("%f",r);
		printf("\n            Do you want to continue(Y/N)");
        scanf("%s",&choice);
	
}

	

}
