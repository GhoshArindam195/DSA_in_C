#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first=NULL, *last=NULL;

void main()
{
    struct Node *t = (struct Node*)malloc(sizeof(struct Node));

    t->data = 10; 
    t->next = NULL;
    first=t;
    last=t;

    t = (struct Node*)malloc(sizeof(struct Node));
    t->data=100;
    t->next=NULL;
    last->next=t;
    last=t;

    t = (struct Node*)malloc(sizeof(struct Node));
    t->data=1000;
    t->next=NULL;
    last->next=t;
    last=t;

    t=first;
    while(t!=NULL)
    {
        printf("%d ->", t->data);
        t=t->next;
    }


}