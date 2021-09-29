#include<stdio.h>

int lSearch(int arr[], int n, int t)
{
    //Linear Search...........
    // int f=-1;
    // for(int i=n-1; i>=0; i--)    //reverse traversing..
    for(int i=0; i<n; i++)
    {
        if(arr[i]==t)
        {
            // f=i;
            // break;
            return i;
        }
    }

    return -1;
}

void main()
{
    int n=8;
    int arr[]={3, 9, 1, 2, 5, 6, 1, 7};
    int t;
    printf("please insert your targetted element\n");
    scanf("%d",&t);

    int f = lSearch(arr, n, t);
    if(f==-1)
        printf("Not Found\n");
    else
        printf("element %d is Found at %d index", t, f);
}