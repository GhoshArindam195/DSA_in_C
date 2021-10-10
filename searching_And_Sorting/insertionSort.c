#include<stdio.h>

void insertion(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int k=arr[i];
        int j=i-1;

        while(j>=0 && k<=arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;

    }
}

void main()
{
    int n=7;
    int arr[]={10, 9, 7, 6, 5, 1, 3};

    printf("Before Sorting:\n");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    
    insertion(arr, n);

    printf("\nAfter Sorting:\n");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
}