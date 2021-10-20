#include<stdio.h>
#include<stdlib.h>

int* merge(int a[], int b[], int m, int n)
{
    int *c = (int*) malloc(sizeof(int)*(m+n));

    int i=0, j=0, k=0;
    while(i<m && j<n)
    {
        if(a[i]<=b[j])
        {
            c[k]=a[i];   
            k++;
            i++;
        }
        else
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<m)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<n)
    {
        c[k]=b[j];
        k++;
        j++;
    }
    return c;
}
void main()
{
    int a[]={4, 8, 10, 12, 15, 23, 38};
    int b[]={1, 3, 5, 7, 13, 24, 35, 41};

    int *ptr = merge(a, b, 7, 8);
    for(int i=0; i<15; i++)
    {
        printf("%d ", ptr[i]);
    }
}