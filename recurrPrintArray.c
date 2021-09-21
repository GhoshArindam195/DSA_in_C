#include<stdio.h>

void print(int arr[], int n)
{
    static int i=0;
    if(i<n)
    {
        printf("%d ", arr[i]);
        i++;
        print(arr, n);
    }
}


void main()
{
    int arr[] = {1, 2, 3, 4, 5};
    print(arr, 5);
}