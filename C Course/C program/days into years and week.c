#include<stdio.h>
#include<conio.h>
main()
{
    int days,weeks,years;

    days = 372;

    years = days/365;
    weeks = (days%365)/7;
    days = days - ((years*365)+ (weeks*7));

    printf("years : %d",years);
    printf("\nweeks : %d",weeks);
    printf("\ndays : %d",days);





}
