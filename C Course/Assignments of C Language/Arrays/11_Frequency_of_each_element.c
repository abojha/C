#include<stdio.h>
#include<stdlib.h>

void CreateAnArray(int array[],int f[],int size)
{
  
   

    for(int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
        f[i] = -1;
    }
    

}
void printing(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d\n",array[i]);
    }
}

// int Frequencyofelement(int array[], int size)
// {
//     for(int i = 0; i <=9; i++)
//     {   int count = 0;
//         for(int j = 0; j < size; j++)
//         {
           
//             if(i==array[j])
//             {
//                 count++;
//             }
            
//         }
//         printf("%d\t",count);
//     }
// }
int Frequencyofelement(int array[],int f[], int size)
{
    for(int i = 0; i < size; i++)
    {   int count = 1;
        for(int j = i+1; j < size; j++)
        {
            if(array[i]==array[j])
            {
                count++;
                f[j] = 0; 
            }
        }
    if(f[i]!=0)
    {
        f[i] = count;
        printf("The freqency of %d is %d\n",array[i],f[i]);
    }
        
    }
}
int main()
{
    int size = 5;
    int array[size];
    int f[size];

    CreateAnArray(array,f,5);
    printing(array,5);
    Frequencyofelement(array,f,5);

  

    

    return 0;
}