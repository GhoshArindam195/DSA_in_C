#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first=NULL;

void main()
{
    struct Node *t = (struct Node*)malloc(sizeof(struct Node));
    // (*t).data=10;
    // (*t).next=NULL;
    t->data = 10;   //Aero Operator
    t->next = NULL;
    first=t;
}