#include<stdio.h>
#include<conio.h>
main()
{ 
	float a;
	float b;
	float r;
	char d;
	
	printf("Enter the first number\n");
	scanf("%f",&a);

	printf("Enter the operation\n");
	scanf("%c",d);
	
	printf("Enter the second number\n");
	scanf("%f",b);
	
	switch(d)
	{
		case '+':
			r = a + b;
			printf("%f",r);
			break;
			
		case '-':
			r = a - b;
			printf("%f",r);
			break;
			
		case '*':
			r = a * b;
			printf("%f",r);
			break;
		
		case '/':
			r = a / b;
			printf("%f",r);
			break; 
			
		default :
			printf("Enter the correct operation");
			break;
			
		
		
		
		
	}
	
getch();
}
