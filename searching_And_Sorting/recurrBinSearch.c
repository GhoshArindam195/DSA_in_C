#include<stdio.h>

int recurBinSearch(int arr[], int l, int h, int k)
{
    if(l>h)     //Pawa jay ni
        return -1;

    int m = (l+h)/2;

    if(arr[m]==k)   //Pawa geche 
        return m;

    if(arr[m]<k)
        recurBinSearch(arr, m+1, h, k);
    else
        recurBinSearch(arr, l, m-1, k);
}


void main()
{
    int arr[]={2, 5, 6, 7, 11, 13, 17};
    int n=7;
    int k = 17;
    int index = recurBinSearch(arr, 0, n-1, k);

    if(index==-1)
        printf("Not Found");
    else
        printf("%d is found at position %d",k, index+1);
}