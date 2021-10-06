#include<stdio.h>

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

void selection(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int minIndex=i+1;
        for(int j=i+1 ; j<n; j++)
        {
            if(arr[j]< arr[minIndex])
                minIndex=j;
        }

        if(arr[minIndex]<arr[i])
        {
            swap(&arr[minIndex], &arr[i]);
        }
    }
}


void main()
{
    int n=7;
    int arr[]={10, 9, 7, 6, 5, 1, 3};

    printf("Before Sorting:\n");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    
    selection(arr, n);

    printf("\nAfter Sorting:\n");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
}