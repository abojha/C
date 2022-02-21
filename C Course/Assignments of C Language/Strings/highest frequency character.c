#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
   char a[100],res;
   int f[256]={0};
   int i,j=0,k,min=0;
   
   printf("Enter a string : ");
   gets(a);
   
   
   for(i=0;i<strlen(a);i++)
   {
   	 f[a[i]]++;
		}
    
   for(i=0;i<256;i++)
   {
	if(f[i]==0)
	{
		continue;
	}
	else
	printf("%c - %d\n",i,f[i]);
	
   	
   }
   
}





