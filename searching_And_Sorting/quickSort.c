#include<stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort(int arr[], int low, int high)
{
    int p, q, pivot;
    if(low<high)
    {
        pivot = low;
        p=low;
        q=high;

        while(p<q)
        {
            while(arr[p]<=arr[pivot] && p<high)
                p++;
            while(arr[q]>arr[pivot])
                q--;
            
            if(p<q)
                swap(&arr[p], &arr[q]);
        }
        swap(&arr[q], &arr[pivot]);

        quickSort(arr,low, q-1);
        quickSort(arr,q+1, high);
    }
}

void main()
{
    int len=10;
    int arr[] = {199, 35, 1, 200, 74, 88, 66, 112, 78, 67};
    printf("Before Sort..");
    for(int i=0; i<len; i++)
        printf("%d ", arr[i]);

    quickSort(arr, 0, len-1);
    
    printf("\n");
    printf("After Sort..");
    for(int i=0; i<len; i++)
        printf("%d ", arr[i]);

}