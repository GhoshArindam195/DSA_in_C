#include<stdio.h>


int power(int m, int n)
{
    if(n==0)
        return 1;
    else
        return power(m, n-1)*m;
}

void main()
{
    printf("%d\n", power(10, 3));
}
