#include<stdio.h>
#include<math.h>
main()
{

 int i,n;
 
 printf("Enter the value of N:");
 scanf("%d",&n);
 
 printf("No.   Square   Cube  Square root\n",n);
 i=1;
 while(i<=n)
 {
 	printf("%d \t %ld \t %ld \t %.2f\n",i,(i*i),(i*i*i),sqrt(i));
 	i++;
 }
	
	
	
}
