#include<stdio.h>
#include<conio.h>
main()
{
char 	a[100],ch;
printf("Enter a string\n");
gets(a);

  printf("\nEnter the character which you find in a string : ");
  scanf("%c",&ch);
  
  int i,j=0;
  for(i=0;a[i]!='\0';i++)
  {
  	if(a[i]==ch)
  	{
  		printf("\nyour charcter %c is at position of %d",ch,i+1);
  		j++;
  	
  		
	}
  	
  	
  	
  }
	
	printf("\nno. of occurence of %c is %d",ch,j);
}
