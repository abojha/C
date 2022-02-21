 #include<stdio.h>
 
int  min_element(int a[],int index,int length)
{
    int min;
        if(index>=length-2)
        {
            if(a[index]<a[index+1])
            {
                return a[index];
            }
            else{
                return a[index+1];
            }
        }
    min = min_element(a,index+1,length);

    if(min<a[index])
    {
        return min;
    }
    else
    {
        return a[index];
    }
}
int max_element(int a[], int index, int length)
{
    int max;
        if(index>=length-2)
        {
            if(a[index]>a[index+1])
            {
                return a[index];
            }
            else{
                return a[index+1];
            }
        }
    max = max_element(a,index+1, length);

    if(max>a[index])
    {
        return max;
    }
    else{
        return a[index];
    }
}
 int main()
 {
     int array[5] = {1,15,17,0,19};
     int mini_element;
     int maxi_element;

     mini_element = min_element(array,0,5);
     maxi_element = max_element(array,0,5);
     printf("%d\n",mini_element);
     printf("%d",maxi_element);
     
     return 0;
 }