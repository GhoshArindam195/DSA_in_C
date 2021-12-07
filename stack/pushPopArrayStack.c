#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    int size;
    int top;
    int *s;
}stk;

int peek()
{
    if(stk.top == -1)
    {
        printf("STACK UNDERFLOW !!");
        return -1;
    }

    int temp = stk.s[stk.top];
    return temp;
}

int stackTop()
{
    return stk.s[stk.size-1];
}

int isEmpty()
{
    if(stk.top == -1)
        return 1;   
    return 0;
}

int isFull()
{
    if(stk.top==stk.size-1)
        return 1;
    return 0;
}

void push(int x)
{
    if(stk.top==stk.size-1)
    {
        printf("STACK OVERFLOW !!");
        return;
    }
    stk.top++;
    stk.s[stk.top] = x; 
}

int pop()
{
    if(stk.top == -1)
    {
        printf("STACK UNDERFLOW !!");
        return -1;
    }

    int temp = stk.s[stk.top];
    stk.top--;
    return temp;
}


void main()
{
    stk.size = 10;
    stk.s = (int *) malloc(sizeof(int)*stk.size);
    stk.top=-1;

    push(10);
    push(8);
    push(11);

    printf("%d\n", pop(stk));
    printf("%d\n", pop(stk));
    printf("%d\n", pop(stk));
    printf("%d\n", pop(stk));
}
