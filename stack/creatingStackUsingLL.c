#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*First, *Last;

int peek()
{
    return Last->data;
}

int isEmpty()
{
    if(First ==NULL && Last == NULL)
        return 1;
    return 0;
}

void push(int val)
{
    struct Node *t = (struct Node *) malloc(sizeof(struct Node));
    t->data=val;
    t->next = NULL;
    if(Last==NULL)
    {
        First = Last = t;
    }
    else
    {
        Last -> next= t;
        Last = t;
    }
}

int pop()
{
    if(First == NULL)
    {
        printf("Stack Underflow!! ");
        return -1;
    }
    if(First != Last)   //More than 1 node exists......
    {
        struct Node *t = First;
        
        while(t->next != Last)
        {
            t=t->next;
        }
        Last=t;
        t=t->next;
        Last->next = NULL;

        int temp = t->data;
        free(t);
        t=NULL;
        return temp;
    }
    else    //Only 1 Node exists.........
    {
        int temp = First->data;
        free(First);
        First = Last = NULL;
        return temp;
    }


}

void main()
{
    push(100);
    push(50);
    push(86);

    printf("%d\n",pop());
    printf("%d\n",pop());
    printf("%d\n",pop());

    
}