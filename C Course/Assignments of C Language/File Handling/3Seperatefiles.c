//***********C Program to write multiple files from a file **********************
#include<stdio.h>
#include<stdlib.h>
int iseven(const int num);
int isprime(const int num);
main()
{
    int num;

    FILE *fp,
        *evenfp,
        *oddfp,
        *primefp;

    fp = fopen("File1.txt","r");
    evenfp = fopen("even.txt","w");
    oddfp = fopen("odd.txt","w");
    primefp = fopen("prime.txt","w");

    while(fscanf(fp,"%d",&num)!=-1)
    {
        if(iseven(num))
        {
            fprintf(evenfp,"%d\t",num);
        }
        else if(isprime(num))
        {
            fprintf(primefp,"%d\t",num);
        }
        

        else{
            fprintf(oddfp,"%d\t",num);
        }
    }

    fclose(fp);
    fclose(evenfp);
    fclose(oddfp);
}

int iseven(const int num)
{
    return !(num&1);
}
int isprime(const int num)
{
    int i;

    if(num<0)
    {
        return 0;
    }

    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;

}