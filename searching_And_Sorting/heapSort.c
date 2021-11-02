#include<stdio.h>
#include<stdlib.h>

int *sorted;
int sortedSize=0;

int deleteHeap(int *h, int size)
{
    sorted = (int *) realloc(sorted, (sortedSize+1)*sizeof(int));
    sorted[sortedSize]=h[0];
    sortedSize+=1;
    h[0] = h[size-1];
    size-=1;

    int i=0;
    int j = i*2+1;

    while(j<size)
    {
        if(h[j]<h[j+1])
            j+=1;

        if(h[j]>h[i])
        {
            int t = h[i];
            h[i]=h[j];
            h[j]=t;
        }
        else
            break;

        i=j;
        j=i*2+1;
    }

    return size;
}



int* insertHeap(int num, int *h, int heapSize)
{
    h = (int *) realloc(h, (heapSize+1)*sizeof(int));
    h[heapSize]=num;
    int i=heapSize;
    int j=0;
    if(i%2==0)
        j= (i-2)/2;
    else
        j= (i-1)/2;

    while(j>=0 && num>h[j])
    {
        h[i]=h[j];
        i=j;
        if(i%2==0)
            j = (i-2)/2;
        else
            j = (i-1)/2;
    }
    h[i]=num;

    return (h);
}

void main()
{
    int n=7;
    int *a = (int *) malloc(n*sizeof(int));

    a[0]=30;
    a[1]=20;
    a[2]=10;
    a[3]=11;
    a[4]=9;
    a[5]=5;
    a[6]=7;

    int *h,heapSize=0;
    for(int i=0; i<n; i++)
    {
        h = insertHeap(a[i], h, heapSize);
        heapSize+=1;
    }

    // for(int i=0; i<heapSize; i++)
    // {
    //     printf("%d ", h[i]);
    // }

    int t = heapSize;
    for(int i=1; i<=t; i++)
    {
        heapSize = deleteHeap(h,heapSize);
    }

    for(int i=0; i<sortedSize; i++)
    {
        printf("%d ", sorted[i]);
    }
}