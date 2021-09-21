#include<stdio.h>

void fun(int arr[], int n, int s)
{
    if(s<n-1)   //4
    {
        fun(arr, n, s+1);
    }
    printf("%d ", arr[s]);
}


void main()
{
    int arr[] = {1, 2, 3, 4, 5};
    fun(arr, 5, 0);
}