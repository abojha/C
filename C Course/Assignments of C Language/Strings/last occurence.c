#include<stdio.h>
#include<conio.h>
main()
{
char 	a[100],ch;
printf("Enter a string\n");
gets(a);

  printf("\nEnter the character which you find in a string : ");
  scanf("%c",&ch);
  
  int i,j=-1;
  for(i=0;a[i]!='\0';i++)
  {
  	if(a[i]==ch)
  	{
  		j=i;
  	
  		
	}
  	
  	
  	
  }
	if(j==-1)
	{
		printf("Sorry we didn't find that character in string'");
	}
	else
	printf("\nLast occurence of your entered charachter %c is at the position of %d",ch,j+1);
	
	
}
