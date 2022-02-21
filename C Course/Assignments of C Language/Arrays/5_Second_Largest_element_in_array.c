#include<stdio.h>

int main()
{
    int array[5] = {12,17,13,10,4};
    int max1, max2;

    max1 = max2 = 0;

    for(int i = 0; i < 5; i++)
    {
        if(array[i]>max1)
        {
            max2 = max1;
            max1 = array[i];
        }
        else if(array[i]>max2 && max1>array[i])
        {
            max2 = array[i];
        }
    }

    printf("The first largest in array is %d\n",max1);
    printf("The second largest in array is %d",max2);
    return 0;
}