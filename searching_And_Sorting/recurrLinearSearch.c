#include<stdio.h>

int recurLSearch(int arr[], int n, int t, int i)
{
    if(i==n)
        return -1;

    else if(arr[i]==t)
        return i;
    else
        return recurLSearch(arr, n, t, i+1);
}


void main()
{
    int n=8;
    int arr[]={3, 9, 1, 2, 5, 6, 1, 7};
    int t;
    printf("please insert your targetted element\n");
    scanf("%d",&t);

    int f = recurLSearch(arr, n, t, 0);
    if(f==-1)
        printf("Not Found\n");
    else
        printf("element %d is Found at %d index", t, f);
}