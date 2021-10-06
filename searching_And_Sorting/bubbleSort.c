#include<stdio.h>

void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

void bubble(int arr[], int n)
{
    int flag;
    for(int i=0; i<n-1; i++)
    {
        flag=0;
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag++;
                swap(&arr[j], &arr[j+1]);

                // int t = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = t;
            }
        }
        if(flag==0)
            break;
    }
}

void main()
{
    int n=7;
    int arr[]={10, 9, 7, 6, 5, 1, 3};

    printf("Before Sorting:\n");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    
    bubble(arr, n);

    printf("\nAfter Sorting:\n");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
}