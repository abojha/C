#include<stdio.h>
#include<conio.h>
 int power(int base, int a)
 {
 	if(a!=0)
 	{
 		return (base*power(base,a-1));
 	  	
	}
	else
	{
		return 1;
	}
 
 }
 
 int main()
 {
 	int base,a,result;
 	printf("Enter the base value\n");
 	scanf("%d",&base);
 	printf("Enter the powe\n");
 	scanf("%d",&a);
 	result = power(base,a);
 	printf("%d",result);
 }
