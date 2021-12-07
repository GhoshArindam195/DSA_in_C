#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    int size;
    int top;
    int *s;
};

void main()
{
    struct Stack stk;
    stk.size = 10;
    stk.s = (int *) malloc(sizeof(int)*stk.size);
    stk.top=-1;
}
