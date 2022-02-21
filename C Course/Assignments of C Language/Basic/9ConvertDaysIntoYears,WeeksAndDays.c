// C Program to Covert Days into Years, Week and Days.

#include<stdio.h>

int main()
{
    int days,Years,weeks;

    printf("Enter the number of days:\n");
    scanf("%d",&days);

    Years = (days/365);
    weeks = (days - (Years * 365))/7;
    days = days - ((Years * 365) + (weeks * 7));

    printf("Years : %d\n",Years);
    printf("Weeks : %d\n",weeks);
    printf("days : %d\n",days);
    return 0;
}