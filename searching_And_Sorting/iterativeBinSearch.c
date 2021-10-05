#include<stdio.h>

int iterBinSearch(int arr[], int l, int h, int k)
{
    int m;
    while(l<=h)
    {
        m = (l+h)/2;

        if(arr[m]==k)
            return m;
        else if(arr[m]<k)
            l=m+1;
        else
            h=m-1;
    }

    return -1;
}

void main()
{
    int arr[]={2, 5, 6, 7, 11, 13, 17};
    int n=7;
    int k = 17;
    int index = iterBinSearch(arr, 0, n-1, k);

    if(index==-1)
        printf("Not Found");
    else
        printf("%d is found at position %d",k, index+1);
}