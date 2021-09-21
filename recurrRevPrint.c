// I/p : 6
// O/p : 6 5 4 3 2 1
#include<stdio.h>

void revPrint(int n)
{
    if(n>1)
    {
        printf("%d\n", n);  //5 4 3 2 1
        revPrint(n-1);
    }
    printf("%d\n", n);
}


void main()
{
    revPrint(7);
}